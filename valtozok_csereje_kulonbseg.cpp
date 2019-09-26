#include "std_lib_facilites.h"

int main()
{
	int a = 2, b = 7;

	a = a + b;
	b = a - b;
	a = a - b;

	cout << "a = " << a << '\n';
	cout << "b = " << b << '\n';

	return 0;
}