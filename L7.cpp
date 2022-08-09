#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <cmath>
#include <fstream>
//G++ #include "bits/stdc++.h"
using namespace std;

#pragma warning(disable : 4996)

template <typename CrazyT>
struct CrazyPoint
{
	CrazyT x;
	CrazyT y;

	string name;
};


template <typename CrazyT>
CrazyT sum(CrazyT a, CrazyT b) // В функциях сам по себе определяется шаблонный тип, в зависимости от аргументов
{
	return a + b;
}


int sum(int a, int b) // В функциях сам по себе определяется шаблонный тип, в зависимости от аргументов
{
	return a + b;
}


string sum(string a, string b) // В функциях сам по себе определяется шаблонный тип, в зависимости от аргументов
{
	return a + b;
}




int main()
{
	FILE* IN;
	FILE* OUT;
	freopen_s(&IN, "input.txt", "r", stdin);
	freopen_s(&OUT, "output.txt", "w", stdout);

	vector<int> v;
	vector<char> vv;

	CrazyPoint<int> pi;
	CrazyPoint<double> pd;

	pi.x = 10.5;

	pd.x = 10.5;

	cout << sum<int>(32, 34.23);

	std::min(1, 2);

	return 0;// 

}