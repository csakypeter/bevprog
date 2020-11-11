#include "../std_lib_facilities.h"

namespace X
{
	int var = 0;
	void print() { cout << "X: " << var << endl; }
}

namespace Y
{
	int var = 0;
	void print() { cout << "Y: " << var << endl; }
}

namespace Z
{
	int var = 0;
	void print() { cout << "Z: " << var << endl; }
}

int main()
{
	X::var = 7;
	X::print();

	using namespace Y;
	var = 10;
	print();

	{
		using Z::var;
		using Z::print;
		var = 11;
		print();
	}

	print();
	X::print();

	return 0;
}