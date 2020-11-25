#include "../std_lib_facilities.h"

double* calc(int res_size, int max)
{
	double* p = new double[max];
	double* result = new double[res_size];

	delete[] p;

	return result;
}

int main()
{
	double* r = calc(200, 100);
	delete[] r;

	return 0;
}