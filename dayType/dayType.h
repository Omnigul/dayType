#pragma once

using namespace std;

class dayType
{
public:
	void setDay(int);
	void showDay();
	int returnDay();
	int returnNextDay();
	int returnPrevDay();
	int calcDayAdd(int num);
private:
	static int day;
	int DAY_MAX = 7;
};