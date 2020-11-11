#include "std_lib_facilities.h"

int main()
try
{
	//1.
	//cout << "Success!\n";
	
	//2.
	//cout << "Success!\n";
	
	//3.
	//cout << "Success" << "!\n";
	
	//4.
	//string success = "Success!";
	//cout << success << '\n';
	
	//5.
	//int res = 7;
	//vector<int> v(10);
	//v[5] = res;
	//cout << "Success!\n";
	
	//6.
	//vector<int> v2(10);
	//v2[5] = 7;
	//if (v2[5] != 7) cout << "Fail!\n";
	//else cout << "Success!\n";
	
	//7.
	//bool cond = true;
	
	//if (cond) cout << "Success!\n";
	//else cout << "Fail!\n";
	
	//8.
	//bool c = false;
	//if (!c) cout << "Success!\n";
	//else cout << "Fail!\n";
	
	//9.
	//string s = "ape";
	//bool c1 = "fool" > s;
	//if (c1) cout << "Success!\n";
	//else cout << "Fail!\n";
	
	//10.
	//string s1 = "ape";
	//if (s1 == "fool") cout << "Fail!\n";
	//else if (s1 == "ape") cout << "Success!\n";
	
	//11.
	//string s2 = "ape";
	//if (s2 == "fool") cout << "Fail!\n";
	//else if (s2 == "ape") cout << "Success!\n;
	
	//12.
	//string s3 = "ape";
	//if (s3 + "fool" == "apefool") cout << "Success!\n";
	
	//13.
	//vector<char> v2(5);
	//for (int i=0; i<v2.size(); ++i)
	//	cout << "Success!\n";
	
	//14.
	//vector<char> v(5);
	//for (int i=0; i<=v.size(); ++i) ;
	//	cout << "Success!\n";
	
	//15.
	//string s = "Success!\n";
	//for (int i=0; i<s.size(); ++i)
	//	cout << s[i];
	
	//16.
	//if (true) cout << "Success!\n";
	//else cout << "Fail!\n";
	
	//17.
	//int x = 2000;
	//int c = x;
	//if (c == 2000) cout << "Success!\n";
	
	//18.
	//string s = "Success!\n";
	//for (int i=0; i<10; ++i)
	//	cout << s[i];
	
	//19.
	//vector<int> v(5);
	//for (int i=0; i<=v.size(); ++i)
	//	cout << "Success!\n";
	
	//20.
	//int i = 0;
	//int j = 9;
	//while (i<10)
	//++i;
	//if (j<i) cout << "Success!\n";
	
	//21.
	//int x = 1;
	//double d = 5/(x+1); // 5/0 ?? --> 5/2 
	//if (d = (2*x+.5)) cout << "Success!\n";
	
	//22.
	//string s = "Success!\n";
	//for (int i=0; i<=10; ++i)
	//	cout << s[i];
	
	//23.
	//int i = 0;
	//int j = 9;
	//while (i < 10) ++i;
	//if (j < i) cout << "Success!\n";
	
	//24.
	//int x = 4;
	//double d = 5/(x-2);
	//if (d = 2*x+.5) cout << "Success!\n";
	
	//25.
	//string success;
	//cin >> success;
	//if (success == "Success!")
	//	cout << "Success!\n";
	
	return 0;
}
catch (exception& e)
{
	cerr << "error: " << e.what() << "\n";
	return 1;
}
catch (...)
{
	cerr << "Oops: unknown exception!\n";
	return 2;
}
