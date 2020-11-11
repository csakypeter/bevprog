#include "../std_lib_facilities.h"

void f(int x)
{
	int z = x + 7;
	cout << "z az f-ben: " << z << endl;
}

int g(int x)
{
	int z = x + 2;
	cout << "z a g-ben: " << z << endl;

	return 2*z;
}

int main()
{
	int z = 10;
	cout << "z a mainben: " << z << endl;
	f(z);
	cout << "z a mainben másodjára: " << z << endl;

	int x = g(z);
	cout << "x a mainben: " << x << endl;
}