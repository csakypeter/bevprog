#include "../std_lib_facilities.h"

class Year
{
	static const int min = 1;
	static const int max = 2200;
public:
	class Invalid{};
	Year(int x) : y{x} { if (x < min || max <= x) throw Invalid{}; }
	int year() { return y; }
	void increment() { y++; }
private:
	int y;
};

Year operator++(Year& year)
{
	year.increment();
}

ostream& operator<< (ostream& os, Year year)
{
	return os << year.year();
}

const vector<string> months = 
{
	"January",
	"February",
	"March",
	"April",
	"May",
	"June",
	"July",
	"August",
	"September",
	"October",
	"November",
	"December"
};

enum class Month
{
	jan = 0, feb = 1, mar = 2, apr = 3, may = 4, jun = 5,
	jul = 6, aug = 7, sep = 8, oct = 9, nov = 10, dec = 11
};

Month operator++(Month& m)
{
	m = (m == Month::dec) ? Month::jan : Month(int(m)+1);
	return m;
}

ostream& operator<<(ostream& os, Month m)
{
	return os << months[int(m)];
}

class Date
{
private:
	Year y;
	Month m;
	int d;
public:
	class Invalid{};
	Date(Year y, Month m, int d) : y(y), m(m), d(d) { if (!is_valid()) throw Invalid{}; }
	void add_day(int n);
	bool is_valid();
	Year year() { return y; }
	Month month() { return m; }
	int day() { return d; }
};

bool Date::is_valid()
{
	if (d > 0 && d < 32) return true;
	return false;
}

void Date::add_day(int n)
{
	d += n;
	while (d > 31)
	{
		d -= 31;
		++m;
		
		if (m == Month::jan)
		{
			++y;
		}

	}
}

//This is just for error handling.
void cout_date(Date& dd)
{
	cout << dd.year() << '.' << dd.month() << '.' << dd.day() << endl;
}

int main()
try {

	Date dx3 {Year{1998}, Month::mar, 30};
	dx3.add_day(543);
	cout_date(dx3);

} catch (Date::Invalid) {
	cout << "Error: Invalid date\n";
	return 1; 
} catch (Year::Invalid) {
	cout << "Error: Invalid year\n";
	return 2; 
} catch (exception& e) {
	cout << "Error: " << e.what() << endl;
	return 3;
}