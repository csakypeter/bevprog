#include "std_lib_facilities.h"

int main()
{
	double min = numeric_limits<double>::max();
	double max = numeric_limits<double>::lowest();
	double sum = 0;


	vector<double> temps;
	for (double temp; cin >> temp; )
		temps.push_back(temp);

	for (auto temp : temps)
	{
		if (temp > max) max = temp;
		if (temp < min) min = temp;

		sum += temp;
		//cout << temp << endl;
	}

	cout << "High temp: " << max << endl;
	cout << "Low temp: " << min << endl;
	cout << "Avg temp: " << sum / temps.size() << endl;

	return 0;
}