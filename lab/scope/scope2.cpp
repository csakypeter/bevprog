#include "../std_lib_facilities.h"

int in_scope = 200;

int main()
{
	{
		int in_scope = 42;
		{
			for (int i = 0; i < 10; ++i)
			{
				cout << i << endl;
			}
			int in_scope = 100;
			cout << in_scope << endl;
		}
	}

	cout << in_scope << endl;

	return 0;
}