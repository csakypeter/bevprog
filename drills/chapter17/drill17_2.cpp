#include "../std_lib_facilities.h"

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
	int* p1 = new int(7);
	cout << "[p1] Memory address: " << p1 << "\nValue: " << *p1 << endl;

	int* p2 = new int[7] {1, 2, 4, 8, 16, 32, 64};
	cout << "[p2] Memory address: " << p2 << "\nValue: "; print_array(cout, p2, 7);

	int* p3 = p2;

	p2 = p1;
	p2 = p3;

	cout << "[p1] Memory address: " << p1 << "\nValue: " << *p1 << endl;
	cout << "[p2] Memory address: " << p2 << "\nValue: "; print_array(cout, p2, 7);

	delete p1;
	delete[] p2; //or delete[] p3 (they are the same memory address pointing to an int array)

	p1 = new int[10] {1, 2, 4, 8, 16, 32, 64, 128, 256, 512};
	p2 = new int[10];

	for (int i = 0; i < 10; i++)
		p2[i] = p1[i];

	cout << "\n\n[p1] Memory address: " << p1 << "\nValue: "; print_array(cout, p1, 10);
	cout << "\n[p2] Memory address: " << p2 << "\nValue: "; print_array(cout, p2, 10);

	delete[] p1;
	delete[] p2; //different memory addresses this time

	vector<int> p1_vector = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512};
	vector<int> p2_vector(10);

	p2_vector = p1_vector;

	cout << "\n\nVectors: \n";

	print_vector(cout, p1_vector);
	print_vector(cout, p2_vector);

	return 0;
}