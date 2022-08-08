#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <cmath>
#include <fstream>
#include <tuple>

//G++ #include "bits/stdc++.h"
using namespace std;

#pragma warning(disable : 4996)

struct MyPoint
{
	int x = 0;
	int y = 0;
	int z = 0;

	/*MyPoint(int xx, int yy, int zz) : x{ xx }, y{ yy }, z{ zz }, name{"2323"}
	{

	}*/

	string name;

	int CinName(); // Метод
} p1, p2, p3;


int MyPoint::CinName() //MyPoint:: указывает на то, что это метод структуры MyPoint
{
	int ret = x + y + z;

	cin >> name;
	cin >> x >> y >> z;

	return ret;
}

//void CinName(MyPoint p) // Копирование
//{
//
//}

//void CinName(MyPoint& p) // Копирование
//{
//	cin >> p.name;
//	cin >> p.x >> p.y >> p.z;
//}


struct MyCrazyPair
{
	int first;
	float second;
};


struct MyTuple
{
	int a;
	int b;
	float fl;
	string st;
};

int main()
{
	FILE* IN;
	FILE* OUT;
	freopen_s(&IN,"input.txt", "r", stdin);
	freopen_s(&OUT, "output.txt", "w", stdout);

	vector<int> v, q, w;
	v.push_back(1);
	v.push_back(2);

	cout << v[0];

	v.size();

	v.resize(1);

	v.assign(100, -1); // resize и смена всех значений

	v.back(); // v[ v.size() - 1]

	v.front(); // v[0]

	v.at(10);

	v.clear();


	std::pair<int, float> pr;
	pr.first = 10;
	pr.second = 23;
	
	MyCrazyPair pr2;
	pr2.first = 10;
	pr2.second = 23;

	std::tuple<int, int, float, string> t;
	std::tuple<int, char, float, string> t2;
	MyTuple tr;
	tr.a = 1;
	tr.b = 2;

	get<0>(t) = 1;
	cout << get<0>(t);

	get<3>(t2) = "AAAAAA";

	cin >> get<0>(t) >> get<1>(t); 

	//get< x > где x это какое по счёту поле
}