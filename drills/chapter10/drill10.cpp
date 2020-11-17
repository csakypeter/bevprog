#include "../std_lib_facilities.h"

struct Point
{
	int x,y;
};

vector<Point> original_points;
vector<Point> processed_points;

void input_points()
{
	int a, b;

	while(cin >> a >> b)
	{
		original_points.push_back(Point{a, b});

		if(original_points.size() == 7) break;
	}
}

void print_points(vector<Point>& v)
{
	for(auto& p : v)
	{
		cout << '(' << p.x << ", " << p.y << ')' << endl;
	}
}

void output_to_mydata()
{
	ofstream mydata;

	mydata.open("mydata.txt");

	for(auto& p : original_points)
	{
		mydata << '(' << p.x << ", " << p.y << ')' << endl;
	}

	mydata.close();
}

void read_from_mydata()
{
	int pointA, pointB;
	char openingParenthesis, comma, closingParenthesis;

	ifstream mydata;
	mydata.open("mydata.txt");

	while(mydata >> openingParenthesis >> pointA >> comma >> pointB >> closingParenthesis)
	{
		processed_points.push_back(Point{pointA, pointB});
	}

	mydata.close();
}

void compare2_vectors(vector<Point>& v1, vector<Point>& v2)
{
	if(v1.size() != v2.size())
		cout << "Vectors are not equal in size" << endl;
	else
	{
		for(int i = 0; i < v1.size(); i++)
		{
			if(v1[i].x != v2[i].x && v1[i].y != v2[i].y)
				cout << "Point no." << i << " of the vectors are not equal" << endl;
		}
	}
}

int main()
{
	cout << "Input seven point pairs (separated by white space): " << endl;
	input_points();

	cout << "Original Points: " << endl;
	print_points(original_points);
	output_to_mydata();
	read_from_mydata();
	cout << "Processed Points: " << endl;
	print_points(processed_points);

	compare2_vectors(original_points, processed_points);

	return 0;
}