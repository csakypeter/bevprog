#include "../std_lib_facilities.h"

struct Date
{
	int y; //year
	int m; //month
	int d; //day
};

//Date today;
Date tomorrow;

void init_day(Date& dd, int y, int m, int d)
{
	if (y > 0 && y < 2100)
	{
		if (m > 0 && m < 13)
		{
			if (d > 0 && d < 32)
			{
				dd.y = y;
				dd.m = m;
				dd.d = d;
			} else error("Invalid date day.");
		} else error("Invalid date month.");
	} else error("Invalid date year.");
}

void add_day(Date& dd, int n)
{
	dd.d += n;
	if (dd.d > 31)
	{
		dd.d = (dd.d % 31);
		dd.m += 1;
	}

	if (dd.m > 12)
	{
		dd.m = (dd.m % 12);
		dd.y += 1;
	}
}

//This is just for error handling. 
void cout_date(Date& dd)
{
	cout << dd.y << '.' << dd.m << '.' << dd.d << endl;
}

int main()
{
	//init_day(today, 12, 24, 2005);
	init_day(tomorrow, 2005, 12, 24);
	add_day(tomorrow, 8);

	cout_date(tomorrow);

	return 0;
}