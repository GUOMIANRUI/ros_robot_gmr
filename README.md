# ROS移动机器人开发总结

- 姓名：郭棉锐
- 电话：13727654235
- 院系：机电工程学院机械电子工程专业
- 联系方式：mianrui.guo@qq.com
- bilibili：https://www.bilibili.com/video/BV1T5411x7Tq

---
## 一、什么是ROS
>引用ROS wiki的解释

- ROS（Robot Operating System，下文简称“ROS”）是一个适用于机器人的开源的元操作系统。它提供了操作系统应有的服务，包括硬件抽象，底层设备控制，常用函数的实现，进程间消息传递，以及包管理。它也提供用于获取、编译、编写、和跨计算机运行代码所需的工具和库函数。
- ROS 的主要目标是为机器人研究和开发提供代码复用的支持。ROS是一个分布式的进程（也就是“节点”）框架，这些进程被封装在易于被分享和发布的程序包和功能包中。ROS也支持一种类似于代码储存库的联合系统，这个系统也可以实现工程的协作及发布。这个设计可以使一个工程的开发和实现从文件系统到用户接口完全独立决策（不受ROS限制）。同时，所有的工程都可以被ROS的基础工具整合在一起。

>ROS = 通讯机制 + 开发工具 + 应用功能 + 生态系统

---
## 二、项目代码
>slam建图功能正常、自主导航功能存在转弯角度过大问题

- [ROS自主导航机器人 github](https://github.com/GUOMIANRUI/ros_robot_gmr)

### PC端功能包：
- 建图功能包：cartographer_ws
- 导航功能包：jetsonbot_nav 
- 键盘控制功能包：teleop\_twist\_keyboard
- 机器人模型功能包：jetsonbot\_description

### 树莓派端功能包
- arduino驱动功能包：ros\_arduino\_bridge
- 雷达驱动功能包：ydlidar_master
- imu驱动功能包：rasp\_imu\_hat\_6dof

### 机器人模型
- solidworks模型：sw_model
- CAD文件：cad_model
- urdf文件：sw_urdf

---
## 三、研发过程

---
### 第一部分：硬件
>淘宝

[CAD文件-->找店家激光切割](https://item.taobao.com/item.htm?spm=a1z09.2.0.0.2d732e8doLG9L7&id=609965457970&_u=l3edfncr9e95)

[激光雷达-->X4激光雷达 扫描仪10米 5k测距频率](https://detail.tmall.com/item.htm?id=598859147729&spm=a1z09.2.0.0.2d732e8doLG9L7&_u=l3edfncr5dc1)

[arduino-->mega2560开发板+usb数据线 不建议买这么贵的](https://detail.tmall.com/item.htm?id=38816270178&spm=a1z09.2.0.0.2d732e8doLG9L7&_u=l3edfncr7a2e)

[面包板、电压转换模块、面包板线、各种铜柱、螺栓螺母](https://risym.tmall.com/shop/view_shop.htm?spm=a1z09.2.0.0.2d732e8doLG9L7&user_number_id=738263294)

[IMU模块](https://item.taobao.com/item.htm?spm=a1z09.2.0.0.2d732e8doLG9L7&id=605374334720&_u=l3edfncr14cd)

[电源模块](https://store.taobao.com/shop/view_shop.htm?spm=a1z09.2.0.0.2d732e8doLG9L7&user_number_id=2426771237)

[TB6612FNG电机驱动模块](https://item.taobao.com/item.htm?spm=a1z09.2.0.0.2d732e8doLG9L7&id=551205306214&_u=l3edfncr3e52)

[电机 别忘了电机支架 联轴器 轮子](https://item.taobao.com/item.htm?spm=a1z09.2.0.0.2d732e8doLG9L7&id=528296088603&_u=l3edfncrd9ab)

---
### 第二部分：软件
### 1.安装双系统 ubuntu16.04（也可以用虚拟机、没有影响）

[装双系统不难的 严谨点就好了](https://zhuanlan.zhihu.com/p/64961724)

---
### 2.在双系统装ROS(kinetic)  
- ros各个版本大同小异，对应好相应的ubuntu版本就好了。安装过程WIKI上都有，但会有许多问题出现，大多搜搜都可解决

- 这里给一个可能比较会遇上而且csdn上那些远古教程解决不了的问题的解决方法：

- sudo rosdep init 失败 raw.githubsercontent.com挂了

- 法一：
[rosdep问题解决](https://mp.weixin.qq.com/s/uxwTda-Qm7OGSMDm39sDvw)

- 法二：
[简单粗暴](https://community.bwbot.org/topic/811/rosdep-init-%E6%88%96%E8%80%85rosdep-update-%E8%BF%9E%E6%8E%A5%E9%94%99%E8%AF%AF%E7%9A%84%E8%A7%A3%E5%86%B3%E5%8A%9E%E6%B3%95)

---
### 3.配置参数
#### 3.1 ros\_arduino\_python\config\my_arduino_params.yaml
- port:/dev/arduino

- 轮子直径 wheel_diameter:0.068 (单位：米)

- 轮间距：wheel_track:0.222 (单位：米)

- 编码器线速：encoder_resolution 16

- 减速比 gear_reduction:43.8

#### 3.2 cartographer\_ws\install\_isolated\share\cartographer\_ros\configuration\_files\jetsonbot\_2d\_only\_lidar.lua
- 参数tracking_frame设置为imu\_link，使用/imu的数据；设置为base\_link,则不使用（imu数据错误时可以不用imu的数据）

- 参数published\_frame设置为base\_link；

- 参数provide\_odom\_frame设置为true，需要内部提供/odom；

- 参数use\_odometry设置为false，因为我们使用内部/odom的数据，不使用外部的；

- 修改参数之前，还是建议去看看[官方文档](https://google-cartographer-ros.readthedocs.io/en/latest/index.html)，这里准比其他任何地方可靠。

#### 3.3 导航包四个配置文件

##### costmap_common_params.yaml
```yaml
obstacle_range: 最大障碍物检测范围,超过该范围不认为是障碍物
raytrace_range: 检测自由空间的最大范围
robot_radius: 机器人本体的半径大小,单位:米,圆形机器人使用
footprint: 对于非圆形机器人可以设置该参数,机器人中心[0,0]参数可以顺时针填写,也可以逆时针填写
inflation_radius: 与障碍物的安全半径距离,如果机器人经常撞到障碍物就需要增大该值,若无法通过狭窄地方就减小该值
cost_scaling_factor:用于将inflation计算cost的比例因数,该参数越大,越不把这个inflating看着移动的cost.map_type:如果想要3D视图的就用voxel,2D视图的就用costmap参数 
observation_sources: 观察源是激光雷达
```
##### local_costmap_params.yaml
```yaml
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
```
##### global_costmap_params.yaml
```yaml
global_frame: 全局代价地图参考系
robot_base_frame: 指定机器人的基础参考系
update_frequency: 指定地图更新频率，数值太大造成CPU负担重
publish_frequency: 对于静态全局地图来说，不需不断发布
static_map: 全局地图通常是静态的，因此设置为true
rolling_window: 全局地图不会在机器人移动时候更新
transform_tolerance: 指定在tf树中frame直接的转换最大延时，单位秒
```
##### dwa_local_planner_params.yaml
```yaml
DWA局部规划器配置参数
```

---
### 4.编译功能包
>我这边的代码是已经编译过了的，所以如果要拿去用记得把编译生成的文件去掉再进行编译

#### PC

创建一个工作空间，将`jetsonbot_description`和`teleop_twist_keyboard`、`jetsonbot_nav`放到src文件夹下面，编译即可

`cartographer_ws`比较特殊，要与`catkin_ws`分开编译

```bash
catkin_make_isolated --install --use-ninja
source install_setup.bash
```
#### 树莓派

同样创建一个工作空间，将`rasp_imu_hat_6dof`和`ros_arduino_bridge`、`ydlidar-master`放到src文件夹下，catkin_make编译即可

>同时要做好ssh通讯和串口绑定

没有ssh服务就下载相应服务，PC端ROS与树莓派端ROS通讯、串口绑定也不复杂，这里贴两个网站供参考，[PC与树莓派端ROS通讯](https://www.cnblogs.com/hiram-zhang/p/10410168.html)、[tty串口绑定](https://www.cnblogs.com/hiram-zhang/p/10410175.html)

#### arduino

记得将last_arduino_bridge烧录到arduino中

---
### 5.机器人启动流程

1. 启动rosmaster

- <code>roscore</code>

2. ssh远程登录树莓派 ssh USERNAME@IP

- 启动雷达：<code>roslaunch ydlidar lidar.launch</code>
- 启动底盘：<code>roslaunch ros_arduino_python arduino.launch</code>
- 启动imu（可选）：<code>roslaunch serial_imu_hat_6dof serial_imu_hat.launch</code>

3. 启动cartographer建图节点

- <code>source install_setup.bash</code>
- <code>roslaunch cartographer_ros jetsonbot_2d_only_lidar.launch</code>

4. 启动键盘控制节点

- <code>chmod a+x teleop_twist_keyboard.py</code>
- <code>./teleop_twist_keyboard.py</code>

5. 保存地图

- 重开一个终端 在cartographer_ws下 `source install_setup.bash`配置环境变量
- 在用户家目录下创建一个目录maps
- 在刚刚的终端输入
- <code>rosrun cartographer_ros cartographer_pbstream_to_ros_map -map_filestem=/home/guomianrui/maps/gmr_map  -pbstream_filename=/home/guomianrui/maps/gmr_map.pbstream -resolution=0.05</code>

6. 启动导航包

- <code>roslaunch jetsonbot_nav jetsonbot_nav_nengyuan.launch</code>

---
### 第三部分：机器人外形设计
>设计软件:solidworks+CAD+keyshot  
>加工工艺：3D打印+激光切割+手工焊板

#### 1 .机械平台
- 考虑到室内环境下使用，机身尺寸不宜太大，也不能太小，机器人以开放式的堆叠结构作为主要结构。以三轮形式两轮差分驱动，在平坦的室内环境下使用，加速度和速度都较小，对车身产生的侧向冲击力很小，同时有灵活的转向能力，功耗小。

<img src="https://s1.ax1x.com/2020/10/23/BAfLIU.jpg" width="600px" div align=center />

- 机械平台实物如图

<img src="https://s1.ax1x.com/2020/10/23/BAhVRH.jpg" width="600px" div align=center />

#### 2. 外形设计
- 作为一个来自机电的机佬，怎么能只做出一个电线裸露的机械平台，外形设计是必要的。机器人的结构示意图、外观设计图及实物图如图

<img src="https://s1.ax1x.com/2020/10/23/BA4U9e.jpg" width="600px" div align=center />

<img src="https://s1.ax1x.com/2020/10/23/BA4wjA.jpg" width="600px" div align=center />

<img src="https://s1.ax1x.com/2020/10/23/BA429g.jpg" width="600px" div align=center />

---
## 四、运行效果截图

- gazabo物理仿真过程

<img src="https://s1.ax1x.com/2020/10/23/BA5RIK.jpg" width="600px" div align=center />

- 机器人实地建图过程

<img src="https://s1.ax1x.com/2020/10/23/BAI8JO.jpg" width="600px" div align=center />

- 机器人实地导航过程

<img src="https://s1.ax1x.com/2020/08/31/dXz97d.jpg" width="600px" div align=center />

>附：[ros相关学习资料](https://github.com/GUOMIANRUI/Ros-1)
