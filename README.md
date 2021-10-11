# ledctl_rosserial
rosserialのサンプルプログラム

`std_msgs`は`Int16`以外にもいろいろなMessage型があるので見てみてください

色情報とかなら`std_msgs/ColorRGBA`が使いやすいと思います

* http://wiki.ros.org/std_msgs


パッケージ`geometry_msgs`ならもっとロボット向きの型がたくさんあります

`geometry_msgs/Accel`とか`geometry_msgs/Twist`とかよさそうです

* http://wiki.ros.org/geometry_msgs


※訂正前の配布スライドだと`sub_stm32.cpp`のことを間違えて`nucleo_rosserial.cpp`と書いてあるかもしれません

