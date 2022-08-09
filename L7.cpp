#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <cmath>
#include <fstream>
#include <functional>


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



int sum(int a, int b) // В функциях сам по себе определяется шаблонный тип, в зависимости от аргументов
{
	return a + b;
}

//
//string sum(string a, string b) // В функциях сам по себе определяется шаблонный тип, в зависимости от аргументов
//{
//	return a + b;
//}



//int crazyDoing(void* fun)
//{
//	return *((int*)  fun);
//
//}

int crazyDoing(std::function<int(int, int)> f);


template <typename T, typename M>
struct CrazyStruct
{
	T a;
	M d;

};


struct AAA
{
	int r;
	char c;
	double d;

};

int main()
{
	FILE* IN;
	FILE* OUT;
	freopen_s(&IN, "input.txt", "r", stdin);
	freopen_s(&OUT, "output.txt", "w", stdout);

	vector<int> v = { 34, 3, 3 , 2 , 1, 3, 2 }; // Композиция

	CrazyStruct<int, double> cs = {100,  0};

	pair<int, double> pr = {1 , 23};

	pr.first = 100;

	pr.second = 0.233;

	tuple<int, double, char, int> t = {1, 3.34, 'f', 0};
	tuple<int, double, char, int> tt = t;

	get<1>(t) = 10.234;

	auto z = 100;
	auto zz = 1.32323;


	int crazy_xx = pr.first;


	auto [crazy_x, crazy_y] = pr; // Копирование из pair
	crazy_x = 10;
	crazy_y = 100;


	auto& [crazyy_x, crazyy_y] = pr; // Оригинальные поля из pair
	crazy_x = 10;

	int& crazyy_xx = pr.first;

	AAA aaa;
	aaa.c = 1;
	aaa.d = 1;
	aaa.r = 1;

	auto [q1, q2, q3] = aaa;

	aaa.r = 100;

	cout << q1;

	return 0;// 
}
