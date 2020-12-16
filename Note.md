# Final Object

## 必做任务

1. 加载数据集，允许用户选择fields和time span。需要加载进度条
2. 可视化：各种信息随着时间的变化.使用各种图表进行可视化。用户可以图形化地调：开始、结束时间，时间step，格子编号。利用插值法让曲线平滑
3. 可视化其他有价值的信息：比如travel time, order fees,公司总收益也要可视化
4. ![屏幕截图 2020-12-02 011607](E:\code\QT\FinalProject\屏幕截图 2020-12-02 011607.png)

## QThread

在一个非主线程中，不能：

1. 不能操作图形化界面
2. 使用QImage和QPainter可以
3. 使用OpenGL有的时候可以，但是要在运行时检查
4. 不能Call QApplication

确保QObject的销毁

1. 在run（）中创建
2. 将QObject::deleteLater()和QT和read：：finished信号关联
3. 将他们移出thread

event loop和和QThread一起使用：

1. 在run()中使用exec()来开启事件
2. 使用quit()和exit()来结束event loop

QMutex QMutex::Recursive模式：在同一个线程锁多遍是不会锁死的

QueueConnect 的slot里必须要有事件循环

必做任务2：

可以供用户选择绘制每个grid的fee和order数量随时间的变化量，可以提供多种图表切换的功能。柱状图，饼状图，折线图。

工具函数：

判断一条数据属于哪一个grid

前端：

1. 开头一个Dialog，当中允许选择field和时间间隔

要整理的知识点：

1. 自定义信号槽

每一个订单当中包含的元素

 1. 出发点grid编号

 2. 结束点grid编号

    编号判断使用

    $\uparrow$ 纬度正方向(30.55106-30.79388) 

    90 91 92 93 94 95 96 97 98 99

    ...

    10 12 13 14 15 16 17 18 19

    0（经度103.9084，纬度30.55106）1 2 3 4 5 6 7 8 9

    --->经度正方向，103.9084~104.1907

 3. 出发时间QDateTime

 4. 结束时间QDateTime

 5. Fee