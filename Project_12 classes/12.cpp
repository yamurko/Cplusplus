#include<iostream>
#include"12.h"

using namespace std;

Time::Time()
{
	hours = 0;
	minutes = 0;
	seconds = 0;
}

void Time::converttoTime(int seconds)
{
	hours = seconds / 3600;
	seconds = seconds % 3600;
	minutes = seconds / 60;
	seconds = seconds % 60;
}

void Time::getTime(void)
{
	cout << "Enter hours: ";
	cin >> hours;
	cout << "Enter minutes: ";
	cin >> minutes;
	cout << "Enter seconds: ";
	cin >> seconds;
}

void Time::convertintoSeconds(void)
{
	total_seconds = (hours * 3600) + (minutes * 60) + seconds;
}

void Time::printUniversal(void)
{
	cout << "HH:MM:SS = " << hours << " : " << minutes << " : " << seconds << endl;
}

void Time::printTotalSeconds(void)
{
	cout << "Total seconds: " << total_seconds << endl;
}

void Time::addTime(Time T1, Time T2)
{
	this->seconds = T1.seconds + T2.seconds;
	this->minutes = T1.minutes + T2.minutes + this->seconds / 60;
	this->hours = T1.hours + T2.hours + (this->minutes / 60);
	this->minutes %= 60;
	this->seconds %= 60;
}