#include "std_lib_facilites.h"

int main()
{
	double value, real_value;
	double max_value = 0, min_value = 0, sum = 0, number_of_values = 0;
	vector<double> pile;
	string unit;

	cout << "Enter a number and its unit (Accepted units: m, cm, ft, in):\n";

	while (cin >> value >> unit)
	{
		cout << "The entered number: " << value << ' ' << unit << '\n';

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

			number_of_values++;
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
		cout << '[' << i + 1 << ']' << "\t" <<  pile[i] << " m\n";
	}

	cout << "\nLargest number: " << max_value << " m\n" << "Smallest number: " << min_value << " m\n"
		<< "The number of values: " << number_of_values << '\n' << "Sum of the numbers: " << sum  << " m\n";

	return 0;
}
