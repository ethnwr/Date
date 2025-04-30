#pragma once
#include <iostream>
using namespace std;
class Date
{
private:
	int day;
	int month;
	int year;
public:
	Date(int day,int month,int year)
	{
		this->day = day;
		this->month = month;
		this->year = year;
	}
	void operator-(const Date& other)
	{
		int result;
		result = day - other.day;
		result += (month * 30) - (other.month * 30);
		result += (year * 365) - (other.year * 365);
		if (result < 0)
		{
			result *= -1;
		}
		cout << result << endl;
	}
	void operator+(const int value)
	{
		int result;
		int newYear = 0;
		int newMonth = 0;
		int newDay = 0;
		result = day;
		result += month * 30;
		result += year * 365;
		result += value;
		while (result >= 365)
		{
			result-= 365;
			newYear++;
		}
		while (result >= 30)
		{
			result -= 30;
			newMonth++;
		}
		while (result >= 1)
		{
			result -= 1;
			newDay++;
		}
		
		cout << newDay << "." << newMonth << "." << newYear << endl;
	}
};
