#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <cmath>
#include <fstream>
#include <tuple>
#include <functional>

//G++ #include "bits/stdc++.h"
using namespace std;

#pragma warning(disable : 4996)


int sum(int a, float b)
{
	return a + b;
}

int mul(int a, float b)
{
	return a * b;

}

//int doing(void* f)
int crazy_doing(std::function < int(int,float)> f, int a, int b)
{
	return f(a, b);
}




int main()
{
	FILE* IN;
	FILE* OUT;
	freopen_s(&IN,"input.txt", "r", stdin);
	freopen_s(&OUT, "output.txt", "w", stdout);

	int* q; // = 35893475

	int a = 500, b; // по адресу 35893475

	//cout << float(a);

	q = &a;

	void* p;

	p = &a; // 5000

	//cout << *(int*)(p);
	std::function < int(int, float)> random_function = sum;

	p = sum;
	cin >> a >> b;

	random_function = mul;

	cout << crazy_doing(sum, a , b) << " " << crazy_doing(mul, a, b);

}