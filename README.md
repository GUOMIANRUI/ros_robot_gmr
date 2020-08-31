# ROS移动机器人开发总结
>郭棉锐 2019-2020机械组组长

# 代码
>如上

## PC端功能包：
建图功能包：cartographer_ws

导航功能包：jetsonbot_nav 

键盘控制功能包：teleop\_twist\_keyboard

机器人模型功能包：jetsonbot\_description

## 树莓派端功能包
arduino驱动功能包：ros\_arduino\_bridge

雷达驱动功能包：ydlidar_master

imu驱动功能包：rasp\_imu\_hat\_6dof

## 机器人模型
solidworks模型：sw_model

CAD文件：cad_model

urdf文件：sw_urdf

# 前期准备
## 硬件
>淘宝

[CAD文件-->找店家激光切割](https://item.taobao.com/item.htm?spm=a1z09.2.0.0.2d732e8doLG9L7&id=609965457970&_u=l3edfncr9e95)

[激光雷达-->X4激光雷达 扫描仪10米 5k测距频率](https://detail.tmall.com/item.htm?id=598859147729&spm=a1z09.2.0.0.2d732e8doLG9L7&_u=l3edfncr5dc1)

[arduino-->mega2560开发板+usb数据线 不建议买这么贵的](https://detail.tmall.com/item.htm?id=38816270178&spm=a1z09.2.0.0.2d732e8doLG9L7&_u=l3edfncr7a2e)

[面包板、电压转换模块、面包板线、各种铜柱、螺栓螺母](https://risym.tmall.com/shop/view_shop.htm?spm=a1z09.2.0.0.2d732e8doLG9L7&user_number_id=738263294)

[IMU模块](https://item.taobao.com/item.htm?spm=a1z09.2.0.0.2d732e8doLG9L7&id=605374334720&_u=l3edfncr14cd)

[电源模块](https://store.taobao.com/shop/view_shop.htm?spm=a1z09.2.0.0.2d732e8doLG9L7&user_number_id=2426771237)

[TB6612FNG电机驱动模块](https://item.taobao.com/item.htm?spm=a1z09.2.0.0.2d732e8doLG9L7&id=551205306214&_u=l3edfncr3e52)

[电机 别忘了电机支架 联轴器 轮子](https://item.taobao.com/item.htm?spm=a1z09.2.0.0.2d732e8doLG9L7&id=528296088603&_u=l3edfncrd9ab)

## 软件
### 1.安装双系统 ubuntu16.04（也可以用虚拟机、没有影响）

[装双系统不难的 严谨点就好了](https://zhuanlan.zhihu.com/p/64961724)

### 2.在双系统装ROS(kinetic)  
ros各个版本大同小异，对应好相应的ubuntu版本就好了。安装过程WIKI上都有，但会有许多问题出现，大多搜搜都可解决

这里给一个可能比较会遇上而且csdn上那些远古教程解决不了的问题的解决方法：

sudo rosdep init 失败 raw.githubsercontent.com挂了

法一：
[rosdep问题解决](https://mp.weixin.qq.com/s/uxwTda-Qm7OGSMDm39sDvw)

法二：
[简单粗暴](https://community.bwbot.org/topic/811/rosdep-init-%E6%88%96%E8%80%85rosdep-update-%E8%BF%9E%E6%8E%A5%E9%94%99%E8%AF%AF%E7%9A%84%E8%A7%A3%E5%86%B3%E5%8A%9E%E6%B3%95)

### 3.配置参数
#### 3.1 ros\_arduino\_python\config\my_arduino_params.yaml
port:/dev/arduino

轮子直径 wheel_diameter:0.068 (单位：米)

轮间距：wheel_track:0.222 (单位：米)

编码器线速：encoder_resolution 16

减速比 gear_reduction:43.8

#### 3.2 cartographer\_ws\install\_isolated\share\cartographer\_ros\configuration\_files\jetsonbot\_2d\_only\_lidar.lua
参数tracking_frame设置为imu\_link，使用/imu的数据；设置为base\_link,则不使用（imu数据错误时可以不用imu的数据）

参数published\_frame设置为base\_link；

参数provide\_odom\_frame设置为true，需要内部提供/odom；

参数use\_odometry设置为false，因为我们使用内部/odom的数据，不使用外部的；

修改参数之前，还是建议去看看[官方文档](https://google-cartographer-ros.readthedocs.io/en/latest/index.html)，这里准比其他任何地方可靠。

#### 3.3 导航包四个配置文件

##### costmap_common_params.yaml
	obstacle_range: 最大障碍物检测范围,超过该范围不认为是障碍物
	raytrace_range: 检测自由空间的最大范围
	robot_radius: 机器人本体的半径大小,单位:米,圆形机器人使用
	footprint: 对于非圆形机器人可以设置该参数,机器人中心[0,0]参数可以顺时针填写,也可以逆时针填写
	inflation_radius: 与障碍物的安全半径距离,如果机器人经常撞到障碍物就需要增大该值,若无法通过狭窄地方就减小该值
	cost_scaling_factor:用于将inflation计算cost的比例因数,该参数越大,越不把这个inflating看着移动的cost.map_type:如果想要3D视图的就用voxel,2D视图的就用costmap参数 
	observation_sources: 观察源是激光雷达
##### local_costmap_params.yaml
	global_frame:指定本地代价地图参考系
	robot_base_frame:指定机器人的base_frame
	update_frequency:指定local代价地图更新频率
	publish_frequency: 代价地图发布可视化信息的频率
	static_map: 本地代价地图不会更新地图，设置false
	rolling_window: 设置滚动窗口,使机器人始终在窗体中心位置
	width: 代价地图宽度,滑动地图x维长度
	height:代价地图长度,滑动地图y维长度
	 resolution: 代价地图的分辨率,该参数需要与yaml文件设置的地图
	transform_tolerance: 指定在tf树中frame直接的转换最大延时，单位秒
##### global_costmap_params.yaml
	global_frame: 全局代价地图参考系
	robot_base_frame: 指定机器人的基础参考系
	update_frequency: 指定地图更新频率，数值太大造成CPU负担重
	publish_frequency: 对于静态全局地图来说，不需不断发布
	static_map: 全局地图通常是静态的，因此设置为true
	rolling_window: 全局地图不会在机器人移动时候更新
	transform_tolerance: 指定在tf树中frame直接的转换最大延时，单位秒
##### dwa_local_planner_params.yaml
	DWA局部规划器配置参数
### 4.编译功能包
>我这边的代码是已经编译过了的，所以如果要拿去用记得把编译生成的文件去掉再进行编译

>PC

创建一个工作空间，将`jetsonbot_description`和`teleop_twist_keyboard`、`jetsonbot_nav`放到src文件夹下面，编译即可

`cartographer_ws`比较特殊，要与`catkin_ws`分开编译

```bash
catkin_make_isolated --install --use-ninja
source install_setup.bash
```
>树莓派

同样创建一个工作空间，将`rasp_imu_hat_6dof`和`ros_arduino_bridge`、`ydlidar-master`放到src文件夹下，catkin_make编译即可

>同时要做好ssh通讯和串口绑定

没有ssh服务就下载相应服务，PC端ROS与树莓派端ROS通讯、串口绑定也不复杂，这里贴两个网站供参考，[PC与树莓派端ROS通讯](https://www.cnblogs.com/hiram-zhang/p/10410168.html)、[tty串口绑定](https://www.cnblogs.com/hiram-zhang/p/10410175.html)

>arduino

记得将last_arduino_bridge烧录到arduino中

### 5.机器人启动流程

`1. `启动rosmaster:roscore

`2. `ssh远程登录树莓派 ssh USERNAME@IP

- 启动雷达：`roslaunch ydlidar lidar.launch`
- 启动底盘：`roslaunch ros_arduino_python arduino.launch`
- 启动imu（可选）：`roslaunch serial_imu_hat_6dof serial_imu_hat.launch`

`3. `启动cartographer建图节点

- `source install_setup.bash`
- `roslaunch cartographer_ros jetsonbot_2d_only_lidar.launch`

`4. `启动键盘控制节点

- `chmod a+x teleop_twist_keyboard.py`
- `./teleop_twist_keyboard.py`

`5. `保存地图

- 重开一个终端 在cartographer_ws下 `source install_setup.bash`配置环境变量
- 在用户家目录下创建一个目录maps
- 在刚刚的终端输入`rosrun cartographer_ros cartographer_pbstream_to_ros_map -map_filestem=/home/guomianrui/maps/gmr_map  -pbstream_filename=/home/guomianrui/maps/gmr_map.pbstream -resolution=0.05`

`5. `启动导航包

- `roslaunch jetsonbot_nav jetsonbot_nav_nengyuan.launch`

### 6.运行效果截图

>说明：README写得可能不够完善，开学比较忙就暂时不做补充了，有错误之处烦请指正，有错即改，导航包还不完善，本文参考即可。
>这台机器人是花费一段时间了的，本着开源精神将模型和代码发出来，希望对各位小伙伴有所帮助

![机器人在rviz中](https://s1.ax1x.com/2020/08/31/dj9pBF.jpg)

![机器人实地建图过程](https://s1.ax1x.com/2020/08/31/dXOWrj.jpg)

![机器人实地导航过程](https://s1.ax1x.com/2020/08/31/dXz97d.jpg)
>附：[ros相关学习资料](https://github.com/GUOMIANRUI/Ros-1)