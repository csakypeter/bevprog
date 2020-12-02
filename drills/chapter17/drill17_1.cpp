#include "../std_lib_facilities.h"

void print_array10(ostream& os, int* a)
{
	for (int i = 0; i < 10; i++)
		os << a[i] << " ";
	os << endl;
}

void print_array(ostream& os, int* a, int n)
{
	for (int i = 0; i < n; i++)
		os << a[i] << " ";
	os << endl;
}

void print_vector(ostream& os, vector<int> a)
{
	for (int i = 0; i < a.size(); i++)
		os << a[i] << " ";
	os << endl;
}


int main()
{
	int* array = new int[10];
	print_array10(cout, array);

	delete[] array;

	vector<int> array100s = {100, 101, 102, 103, 104, 105, 106, 107, 108, 109};
	print_vector(cout, array100s);

	vector<int> array100sPlusOne = {100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110};
	print_vector(cout, array100sPlusOne);

	vector<int> array20 = {100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119};
	print_vector(cout, array20);

	return 0;
}