#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <cmath>
#include <fstream>
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

int main()
{
	FILE* IN;
	FILE* OUT;
	freopen_s(&IN,"input.txt", "r", stdin);
	freopen_s(&OUT, "output.txt", "w", stdout);


	/*CinName(p2);
	CinName(p1);
	CinName(p3);
	CinName(p2);*/

	cout << p2.CinName() << "\n";

	cout << p3.CinName() << "\n";

	cout << p2.CinName() << "\n";

	cout << p1.CinName() << "\n";

	vector<int> v;
	v.push_back(1);
	v.push_back(2);

	v.pop_back();

	cout << v[0];


}