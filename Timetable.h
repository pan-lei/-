/*
	这个类的作用是传递一个车的对象进来，为他按照传递的顺序安排运行时间段
	利用for循环，一个时间段两个小时，从六点到下午六点
	一辆车一个往返花费一个小时，车与车间隔半个小时
*/

#pragma once
#include "Car.h"
class Timetable
{
public:
	Timetable(void);
	~Timetable(void);
	void setTimeInfo(Car &c);
};

