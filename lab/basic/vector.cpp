#include "std_lib_facilities.h"

int main()
{
	vector<int> v = {5, 7, 9, 4, 6, 8};

	for (int i = 0; i < v.size(); i++)
		cout << v[i] << endl;

	vector<string> philosophers = { "Kant","Plato","Hume" };

	for (string name : philosophers) //string helyett lehet auto-t is használni
		cout << name << endl;

	vector<double> dv;

	cout << "Vector size: " << dv.size() << endl;

	dv.push_back(2.7);
	dv.push_back(5.6);
	dv.push_back(7.9);

	cout << "Vector size: " << dv.size() << endl;

	for (auto number : dv)
		cout << number << endl;

	cout << dv[1] << endl;

	return 0;
}