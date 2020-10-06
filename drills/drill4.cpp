#include "std_lib_facilities.h"

int main()
{
	double value, real_value;
	double max_value = 0, min_value = 0, sum = 0;
	vector<double> pile;
	string unit;

	cout << "Enter numbers and their units (Accepted units: m, cm, ft, in):\n"; //unit meaning unit of measurement in this case

	while (cin >> value >> unit)
	{
		cout << "Entered number: " << value << ' ' << unit << '\n';

		if (unit == "m" || unit == "cm" || unit == "in" || unit == "ft")
		{
			if (unit == "cm")
				real_value = value / 100;
			if (unit == "m")
				real_value = value;
			if (unit == "in")
				real_value = (value * 2.54) / 100;
			if (unit == "ft")
				real_value = (value * 12 * 2.54) / 100;

			sum += real_value;
			pile.push_back(real_value);

			if (max_value == 0 && min_value == 0)
			{
				max_value = real_value;
				min_value = real_value;
			}
			else if (real_value > max_value)
			{
				max_value = real_value;
			}
			else if (real_value < min_value)
			{
				min_value = real_value;
			}
		}
		else
			cout << "The entered unit is invalid\n";
	}

	cout << "The entered values in a pile (in increasing order):\n";
	sort(pile.begin(), pile.end());
	for (int i = 0; i < pile.size(); i++)
	{
		cout << '[' << i + 1 << ']' << "\t" << pile[i] << " m\n"; // +1 to the increment because of readability (vector starts from 0)
	}

	cout << "\nLargest number: " << max_value << " m\n" << "Smallest number: " << min_value <<" m\n"
		<< "The number of values: " << pile.size() << '\n' << "Sum of the numbers: " << sum << " m\n";

	return 0;
}