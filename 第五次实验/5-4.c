/*
5.4 编写函数，计算某月某日是该年度的第几天。
输入：
2016-1-1
输出：
1
*/

#include <stdio.h>

//不等价，因为判断闰年的标准是：1、能整除4且不能整除100  2、能整除400
int getMonthDay(int year, int month)
{
	if (month == 2)
	{
		if ((year % 4 == 0 && year % 100 != 0 )|| year % 400 == 0)
			return 29;
		else
			return 28;
	}
	else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
		return 31;
	else
		return 30;
}

int main()
{
	int year, month, day;
	scanf("%d-%d-%d", &year, &month, &day);
	//计算是第几天？ 月份*month + day
	int result = day;
	int i; 
	for (i = 1; i < month; i++)
	{
		// printf("%d\n", getMonthDay(year, i));
		result += getMonthDay(year, i);
	}
	printf("%d\n", result);

	return 0;
}