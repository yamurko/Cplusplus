#ifndef TIME_H
#define TIME_H

class Time
{
public:
	Time();

	void converttoTime(int);

	void getTime(void);

	void convertintoSeconds(void);

	void printUniversal(void);

	void printTotalSeconds(void);

	void addTime(Time T1, Time T2);

private:
	int hours, minutes, seconds, total_seconds;
};

#endif // !TIME_H
