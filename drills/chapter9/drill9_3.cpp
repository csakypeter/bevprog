#include "../std_lib_facilities.h"

class Date
{
private:
	int y, m, d; // year, month, day
public:
	Date(int y, int m, int d); // check for valid date and initialize
	void add_day(int n); // increase the Date by n days
	int year() { return y; }
	int month() { return m; }
	int day() { return d; }
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
	d += n;
	while (d > 31)
	{
		d -= 31;
		++m;

		if (m > 12)
		{
			++y;
			m = 1;
		}

	}
}

//This is just for error handling. 
void cout_date(Date& dd)
{
	cout << dd.year() << '.' << dd.month() << '.' << dd.day() << endl;
}

int main()
{
	Date birthday {1978, 12, 25};
	//birthday.m = 14; // error: Date::m is private

	birthday.add_day(379); //a year in this calendar is 372 days
	cout_date(birthday);

	return 0;
}