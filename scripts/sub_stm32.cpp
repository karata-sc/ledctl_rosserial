#include "mbed.h"
#include <ros.h>
#include <std_msgs/Int16.h>

ros::NodeHandle nh;
DigitalOut myled(PA_5);

void messageCb(const std_msgs::Int16& msg){
    for(int i=0; msg.data>i; i++){
        myled = 1;
        wait_ms(100);
        myled = 0;
        wait_ms(100);
    }
}

ros::Subscriber<std_msgs::Int16> sub("blink_times", &messageCb);

int main() {
    nh.initNode();
    nh.subscribe(sub);
    myled = 0;

    while (1) {
        nh.spinOnce();
        wait_ms(1);
    }
}
