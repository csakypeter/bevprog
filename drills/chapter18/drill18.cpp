#include "../std_lib_facilities.h"

//GLOBAL VARIABLES
int ga[10] = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512};
vector<int> gv = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512};
//

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

void f_a(int* a, int n)
{
	int la[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

	for (int i = 0; i < n; i++)
		la[i] = ga[i];

	print_array(cout, la, 10);

	int* pa = new int[n];
	for (int i = 0; i < n; i++)
		pa[i] = a[i];

	print_array(cout, pa, 10);

	delete[] pa;
}

void f_v(vector<int> v)
{
	vector<int> lv(v.size());
	lv = gv;

	print_vector(cout, lv);

	vector<int> lv2 = v;

	print_vector(cout, lv2);
}

int main()
{
	cout << "f_a(ga, 10):\n";
	f_a(ga, 10);

	int aa[10] = {1, 2*1, 3*2*1, 4*3*2*1, 5*4*3*2*1, 6*5*4*3*2*1, 7*6*5*4*3*2*1, 8*7*6*5*4*3*1, 9*8*7*6*5*4*3*2*1, 10*9*8*7*6*5*4*3*2*1};
	cout << "\nf_a(aa, 10):\n";
	f_a(aa, 10);

	cout << "\nf_v(gv):\n";
	f_v(gv);

	vector<int> vv = {1, 2*1, 3*2*1, 4*3*2*1, 5*4*3*2*1, 6*5*4*3*2*1, 7*6*5*4*3*2*1, 8*7*6*5*4*3*1, 9*8*7*6*5*4*3*2*1, 10*9*8*7*6*5*4*3*2*1};
	cout << "\nf_v(vv):\n";
	f_v(vv);

	return 0;
}