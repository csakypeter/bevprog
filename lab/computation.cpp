#include "std_lib_facilities.h"

int main()
{
	double value1;
	double value2; 

	while (cin >> value1 >> value2)
	{
		cout << "The entered values are: " << value1 << " and " << value2 << endl;
		if (value1 > value2)
			cout << "The smaller value is: " << value2 << "\nThe larger value is: " << value1 << endl;
		else if (value1 < value2)
			cout << "The smaller value is: " << value1 << "\nThe larger value is: " << value2 << endl;
		else if (value1 == value2) cout << "The numbers are equal." << endl;
		
		if (abs(value1 - value2) < (1/100))
			cout << "The numbers are almost equal.\n";
	}
}
