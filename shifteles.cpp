#include "std_lib_facilites.h"
#include <Windows.h>

int main()
{
	int a = 1;
	int index = 0;

	while (a != 0)
	{
		cout << '[' << index << ']' << " a = " << a <<'\n';
		a = (a << 1);
		index++;

		Sleep(250); //Added delay to see the change between each cycle in real time
					//(This delay slows down the cycle tremendously, it's only here for demonstration)
	}

	cout << "\nWe shifted 'a' " << index << " times.";

	return 0;
}