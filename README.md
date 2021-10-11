# ledctl_rosserial

---
概要
---
rosserialのサンプルプログラムです．
訂正前の配布スライドだと`sub_stm32.cpp`のことを間違えて`nucleo_rosserial.cpp`と書いてあるかもしれません

---
+α
---

サンプルプログラムだとMessage型に`std_msgs/Int16`を使っていますが，他にもいろいろ便利なMessage型があるので見てみてください．

色情報をやり取りするなら`std_msgs/ColorRGBA`が使いやすいと思います

・http://wiki.ros.org/std_msgs

`geometry_msgs`をインポートすれば，よりロボット向きの型が使えます

`geometry_msgs/Accel`とか`geometry_msgs/Twist`とかモータ制御によさそうです
・http://wiki.ros.org/geometry_msgs 
