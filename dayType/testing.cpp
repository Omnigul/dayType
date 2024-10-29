

#include <iostream>
#include "dayType.h"

using namespace std;


void main()
{
	dayType test;
	int dayName;
	int tempDay = 1;
	test.setDay(tempDay);
	test.showDay();
	test.setDay(4);
	test.showDay();
	test.returnNextDay();
	test.showDay();
	test.returnPrevDay();
	test.returnPrevDay();
	test.showDay();
	test.setDay(1);
	test.calcDayAdd(4);
	test.showDay();
	test.setDay(2);
	test.calcDayAdd(13);
	test.showDay();
};