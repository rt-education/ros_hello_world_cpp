[English](README.en.md) | [Japanese](README.md)

# ROS tutorial
This tutorial goes through the Publisher and Subscriber communications. The program is written in C++.

## Install
Execute the commands listed below to install this repository.
```shell
$ cd ~/<ROS_WORKSPACE>/src
$ git clone https://github.com/rt-education/ros_hello_world_cpp
$ catkin build
$ source ~/.bashrc
```

## Usage
```shell
# Terminal 1
$ roscore
# Terminal 2
$ rosrun hello_world_cpp talker
# Terminal 3
$ rosrun hello_world_cpp listener
``` 

## License
(C) 2020 RT Corporation \<edu@rt-net.jp\>  
If a file has a license written within it, it is released under that license. Otherwise, each file is licensed under the Apache-2.0 license.

The full text of the license is written in the [LICENSE](LICENSE) file or [here](http://www.apache.org/licenses/LICENSE-2.0).

*This software is released __AS IS__ as an open source software.  
This software is provided during a seminar, and will only be supported during that seminar.  
For detailed about the seminar, please refer to [here](https://rt-net.jp/service/for-companies/).