#include "std_lib_facilites.h"

int main()
{
	int a = 2, b = 7;

	a = a xor b;
	b = a xor b;
	a = a xor b;

	cout << "a = " << a << '\n';
	cout << "b = " << b << '\n';

	return 0;
}
