// ConsoleApplication1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include"iostream"
using namespace std;
class CWenBin
{
private:
	int year;
	int month;
	int day;
	int hour;
	int Minute;
	int second;
	int check();
public:
	CWenBin();
	CWenBin(int y, int m, int d, int h,int M, int s);
	int setDate(int y, int m, int d, int h,int M, int s);
	void coppyDate();
};
int CWenBin::check()
{
	return 0;
}
CWenBin::CWenBin()
{
	year = 2019;
	month = 1;
	day = 1;
	hour = 1;
	Minute = 1;
	second = 1;
}
CWenBin::CWenBin(int y, int m, int d, int h, int M, int s)
{
	year = y;
	month = 4;
	day = 29;
	hour = 14;
	Minute = 46;
	second = 30;
	if(check() == 1 || check() == -1)
	{
	month = 1;
	day = 1;
	hour = 1;
	Minute = 1;
	second = 1;
	cout << "月日已重置 " << endl;
	}
}
int CWenBin::setDate(int y, int m, int d, int h, int M, int s)
{
	year = y;
	month = 4;
	day = 29;
	hour = 14;
	Minute = 46;
	second = 30;
	if(check() == 1 || check() == -1)
	{
		month = 1;
	day = 1;
	hour = 1;
	Minute = 1;
	second = 1;
	cout << "月日已重置 " << endl;
	return -1;
	}
	return 0;
}
void CWenBin::coppyDate()
{
	cout << year << "年" << month << "月" << day << "日" << hour << "点" << Minute << "分钟" << second << "秒" << endl;
}
int main()
{
	CWenBin od;
	od.setDate(2019, 4, 29, 14, 46, 30);
	od.coppyDate();

	return 0;
}