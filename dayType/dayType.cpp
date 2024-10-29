
#include <iostream>
#include "dayType.h"

using namespace std;

void dayType::setDay(int temp)
{
	day = temp;
}

void dayType::showDay()
{
	if (0 < day <= DAY_MAX)
	{
		switch (day)
		{
			case 1:
			{
				cout << "the day is Sunday" << endl;
				break;
			}
			case 2:
			{
				cout << "the day is Monday" << endl;
				break;
			}
			case 3:
			{
				cout << "the day is Tuesday" << endl;
				break;
			}
			case 4:
			{
				cout << "the day is Wednesday" << endl;
				break;
			}
			case 5:
			{
				cout << "the day is Thursday" << endl;
				break;
			}
			case 6:
			{
				cout << "the day is Friday" << endl;
				break;
			}
			case 7:
			{
				cout << "the day is Saturday" << endl;
				break;
			}
		}
	}
	else
	{
		cout << "error in showDay: out of range" << endl;
	}
}

int dayType::returnDay()
{
	return day;
}

int dayType::returnNextDay()
{
	int dayName;
	day++;
	if (day == 8)
	{
		day = 1;
	}
	dayName = returnDay();
	return dayName;
}

int dayType::returnPrevDay()
{
	int dayName;
	day--;
	if (day == 0)
	{
		day = 7;
	}
	dayName = returnDay();
	return dayName;
}

int dayType::calcDayAdd(int num)
{
	int dayName;
	int tally = 0;
	while (tally < num)
	{
		tally++;
		dayName = returnNextDay();
	}
	dayName = day;
	return dayName;
}
