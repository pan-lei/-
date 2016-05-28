#include "Timetable.h"

void Timetable::setTimeInfo(Car &c)
{
	c.setTimeq("9:00-11:00");
	c.setArrivetime("9:00");
	c.setLeavetime("9:30");
	c.setDesttime("11:00");
}

Timetable::Timetable(void)
{
}


Timetable::~Timetable(void)
{
}
