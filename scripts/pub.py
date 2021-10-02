#!/usr/bin/env python3
import rospy
from std_msgs.msg import Int16

rospy.init_node('led_ctl')
pub = rospy.Publisher('blink_times', Int16, queue_size=1)
blink = Int16()

while not rospy.is_shutdown():
    blink.data = int(input("input blink_times: "))
    pub.publish(blink)
