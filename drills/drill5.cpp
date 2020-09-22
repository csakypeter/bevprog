#include "std_lib_facilites.h"

int main()
try {
	int index = 0;

	// Addressing step 1-25. from Chapter 5
	
	// 1.
	cout << "Success!\n";
	index++;

	// 2.
	cout << "Success!\n";
	index++;

	// 3.
	cout << "Success" << "!\n";
	index++;

	// 4.
	cout << "success" << '\n';
	index++;

	// 5.
	int res = 7;
	vector<int> v(10);
	v[5] = res;
	cout << "Success!\n";
	index++;

	// 6.
	vector<int> v1(10);
	v1[5] = 7;
	if (v1[5] != 7) cout << "Fail!\n";
	else { cout << "Success!\n"; index++; }

	// 7.
	bool a = true;

	if (a) { cout << "Success!\n"; index++; }
	else cout << "Fail!\n";

	// 8.
	bool c = false;
	if (!c) { cout << "Success!\n"; index++; }
	else cout << "Fail!\n";

	// 9.
	string s = "ape";
	bool d = "fool" < s;
	if (!d) { cout << "Success!\n"; index++; }

	// 10.
	string s1 = "ape";
	if (s1 == "fool") cout << "Fail!\n";
	else if (s1 == "ape") { cout << "Success!\n"; index++; }

	// 11.
	string s2 = "ape";
	if (s2 == "fool") cout << "Success!\n";
	else if (s2 == "ape") { cout << "Success!\n"; index++; }

	// 12.
	string s3 = "ape";
	if (s3 + "fool" == "apefool") { cout << "Success!\n"; index++; }

	// 13.
	vector<char> v2(5);
	for (int j = 0; j < v2.size(); ++j);
	cout << "Success!\n";
	index++;

	// 14.
	vector<char> v3(5);
	for (int k = 0; k <= v3.size(); ++k);
	cout << "Success!\n";
	index++;

	// 15.
	string s4 = "Success!\n";
	for (int l = 0; l < s4.size(); ++l) cout << s4[l];
	index++;

	// 16.
	if (true) { cout << "Success!\n"; index++; }
	else cout << "Fail!\n";

	// 17.
	int x = 2000;
	char ch = x;
	if (ch = 2000) { cout << "Success!\n"; index++; }

	// 18.
	string s5 = "Success!\n";
	for (int m = 0; m < s5.size(); ++m) cout << s5[m];
	index++;

	// 19.
	vector<int> v4(5);
	for (int n = 0; n <= v4.size(); ++n);
	cout << "Success!\n";
	index++;

	// 20.
	int i = 0;
	int j1 = 9;
	while (i < 10)
		++i;
	if (j1 < i) { cout << "Success!\n"; index++; }

	// 21.
	int x1 = 2;
	double d1 = 5 / x1;
	if (d1 = (2 * x1 / 2 + 0.5)) { cout << "Success!\n"; index++; }

	// 22.
	string s6 = "Success!\n";
	for (int o = 0; o < s6.size(); ++o) cout << s6[o];
	index++;

	// 23.
	int i1 = 0;
	int j2 = 9;
	while (i1 < 10)
		++i1;
	if (j2 < i1) { cout << "Success!\n"; index++; }

	// 24.
	int x2 = 4;
	double d2 = 5 / (x2 - 2); // 2.5000
	if (d2 = 2 * (x2 - 3) + 0.5) { cout << "Success!\n"; index++; }

	// 25.
	cout << "Success!\n";
	index++;

	cout << "\n\n" << index << "\n";
		keep_window_open();
	return 0;
}
catch (exception& e) {
	cerr << "error: " << e.what() << '\n';
	keep_window_open();
	return 1;
}
catch (...) {
	cerr << "Oops: unknown exception!\n";
	keep_window_open();
	return 2;
}
