#include "../std_lib_facilities.h"

struct Date
{
	int y, m, d;
	Date(int y, int m, int d);
	void add_day(int n);
};

Date::Date(int y, int m, int d)
{
	if (y > 0 && y < 2100)
	{
		if (m > 0 && m < 13)
		{
			if (d > 0 && d < 32)
			{
				Date::y = y;
				Date::m = m;
				Date::d = d;
			} else error("Invalid date: day.");
		} else error("Invalid date: month.");
	} else error("Invalid date: year.");
}

void Date::add_day(int n)
{
	Date::d += n;
	if (Date::d > 31)
	{
		float f = (Date::d / 31);
		float whole, frac;

		frac = modf(f, &whole);
		int iWhole = static_cast<int>(whole);

		Date::d = (Date::d % 31);
		Date::m += iWhole;
	}

	if (Date::m > 12)
	{
		float f = (Date::m / 12);
		float whole, frac;

		frac = modf(f, &whole);
		int iWhole = static_cast<int>(whole);

		Date::m = (Date::m % 12);
		Date::y += iWhole;
	}
}

//This is just for error handling. 
void cout_date(Date& dd)
{
	cout << dd.y << '.' << dd.m << '.' << dd.d << endl;
}

int main()
{
	Date last = {2000,12,31};
	last.add_day(36);
	cout_date(last);

	return 0;
}