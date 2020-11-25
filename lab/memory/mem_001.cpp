#include "../std_lib_facilities.h"

int main()
{
	int var = 17;
	int* ptr = &var;

	int x = 17;
	int* pi = &x;

	double e = 2.71;
	double* pd = &e;

	cout << "pi == " << pi << "; contents of pi == "<< *pi << endl;
	cout << "pi == " << pd << "; contents of pi == "<< *pd << endl;

	*pi = 27;
	*pd = 3.14;

	cout << "pi == " << pi << "; contents of pi == "<< *pi << endl;
	cout << "pi == " << pd << "; contents of pi == "<< *pd << endl;

	*pd = *pi;

	cout << "pi == " << pi << "; contents of pi == "<< *pi << endl;
	cout << "pi == " << pd << "; contents of pi == "<< *pd << endl;

	/* ERRORS!
	int i = pi;
	pi = 7;
	char *pc = pi;
	*/

	return 0;
}