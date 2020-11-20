[English](README.en.md) | [Japanese](README.md)

# ROS Tutorial
このリポジトリはROSのチュートリアル用のもので、C++で書かれています。ROSのトピック通信を用いています。

## インストール方法
```shell
$ cd ~/<ROS_WORKSPACE>/src
$ git clone https://github.com/rt-education/ros_hello_world_cpp
$ catkin build
$ source ~/.bashrc
```

## 動かし方
```shell
# Terminal 1
$ roscore
# Terminal 2
$ rosrun hello_world_cpp talker
# Terminal 3
$ rosrun hello_world_cpp listener
``` 

## ライセンス
(C) 2020 RT Corporation \<edu@rt-net.jp\>  
各ファイルはライセンスがファイル中に明記されている場合、そのライセンスに従います。特に明記されていない場合は、Apache-2.0ライセンスに基づき公開されています。

ライセンスの全文は[LICENSE](LICENSE)または[こちら](http://www.apache.org/licenses/LICENSE-2.0)に書かれています。

※このソフトウェアは基本的にオープンソースソフトウェアとして「AS IS」（現状有姿のまま）で公開しています。  
セミナー開催時にご案内しているもので、セミナー以外で本ソフトウェアに関するサポートはありません。  
セミナーについては[こちら](https://rt-net.jp/service/for-companies/)のページをご参照ください。