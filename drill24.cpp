#include <iostream>
#include <stdexcept>
#include <vector>
#include <algorithm>
#include <list>
#include <array>
#include <string>
#include "Matrix.h"

using namespace Numeric_lib;

/*
1. Print the size of a char , a short , an int , a long , a float , a double , an int* ,
and a double* (use sizeof , not <limits> ).
2. Print out the size as reported by sizeof of Matrix<int> a(10) , Matrix<int>
b(100) , Matrix<double> c(10) , Matrix<int,2> d(10,10) , Matrix<int,3>
e(10,10,10) .
3. Print out the number of elements of each of the Matrix es from 2.
4. Write a program that takes int s from cin and outputs the sqrt() of each
int , or “no square root” if sqrt(x) is illegal for some x (i.e., check your
sqrt() return values).
5. Read ten floating-point values from input and put them into a Matrix-
<double> . Matrix has no push_back() so be careful to handle an attempt
to enter a wrong number of double s. Print out the Matrix .
6. Compute a multiplication table for [0,n)*[0,m) and represent it as a 2D
Matrix . Take n and m from cin and print out the table nicely (assume that
m is small enough that the results fit on a line).
7. Read ten complex<double> s from cin (yes, cin supports >> for complex )
and put them into a Matrix . Calculate and output the sum of the ten com-
plex numbers.
8. Read six int s into a Matrix<int,2> m(2,3) and print them out.
*/

void init1(Matrix<int,1>& a)
{
	for (int i=0; i<a.dim1(); ++i)
		a(i) = 10*i;
}

void init1d(Matrix<double,1>& a)
{
	for (int i=0; i<a.dim1(); ++i)
		a(i) = 10*i;
}

void init2(Matrix<int,2>& a)
{
	for (int i=0; i<a.dim1(); ++i)
		for (int j = 0; j<a.dim2(); ++j)
			a(i,j) = 10*i+j;
}

void init3(Matrix<int,3>& a)
{
	for (int i=0; i<a.dim1(); ++i)
		for (int j = 0; j<a.dim2(); ++j)
			for (int k = 0; k<a.dim3(); ++k)
				a(i,j,k) = 10*i+j+k;
}

void print1(const Matrix<int,1>& a)
{
	std::cout << a.size() << '\n';
}

void print1d(const Matrix<double, 1>& a)
{
	std::cout << a.size() << '\n';
}

void print2(const Matrix<int,2>& a)
{
	std::cout << a.size() << '\n';
}

void print3(const Matrix<int,3>& a)
{
	std::cout << a.size() << '\n';
}


int readSqrt()
{
	int a;
	string no = "

	std::cin >> a
	
	if(a < 0) 
}

int main()
{
	char a;
	short b;
	int c;
	long d;
	float e;
	double f;
	int* g;
	double* h;
	
	std::cout << sizeof(a) << '\n';
	std::cout << sizeof(b) << '\n';
	std::cout << sizeof(d) << '\n';
	std::cout << sizeof(d) << '\n';
	std::cout << sizeof(e) << '\n';
	std::cout << sizeof(f) << '\n';
	std::cout << sizeof(g) << '\n';
	std::cout << sizeof(h) << "\n\n";
	
	Matrix<int, 1> ma(10);
	Matrix<int, 1> mb(100);
	Matrix<double, 1> mc(10);
	Matrix<int,2> md(10,10);
	Matrix<int,3> me(10,10,10);
	
	std::cout << sizeof(ma) << '\n';
	std::cout << sizeof(mb) << '\n';
	std::cout << sizeof(mc) << '\n';
	std::cout << sizeof(md) << '\n';
	std::cout << sizeof(me) << "\n\n";
	
	init1(ma);
	print1(ma);
	
	init1(mb);
	print1(mb);
	
	init1d(mc);
	print1d(mc);
	
	init2(md);
	print2(md);
	
	init3(me);
	print3(me);
	
	return 0;	
}
