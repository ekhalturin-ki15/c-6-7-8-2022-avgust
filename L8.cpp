#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <cmath>
#include <fstream>
#include <list> // Список
#include <stack>
#include <queue>
#include <map>


#include <random>

#include <set>

//G++ #include "bits/stdc++.h"
using namespace std;

#pragma warning(disable : 4996)


bool crzyCmp(int l, int r) // <
{
	if (l > r) return true;
	return false; // l == r
}


//l == r  false

//(!(l < r) && !(r < l))  ~ l == r

struct MyCmp
{
	int x = 0;

	int info() const // Константный метод (нельзя менять поля)
	{
		//x = 10;
		return x;
	}

	bool operator()(int l, int r) const
	{
		return abs(l-x) < abs(r - x);
	}
};



int main()
{
	FILE* IN;
	FILE* OUT;
	freopen_s(&IN, "input.txt", "r", stdin);
	freopen_s(&OUT, "output.txt", "w", stdout);

	vector<int> d = {3, 3, 3, 4, 2, 3, 4, 2, 4, 10};
	sort(d.begin(), d.end(), MyCmp() );
	//sort(d.begin(), d.end(), greater<int>());

	map<string, int, greater<string> > crazy_map; // первый шаблон - это ключ 
	//(то, при помощи чего можно обратиться к элементу)

	//В vector ключ можно считать индекс

	pair<string, int> pr;
	pr.first = "aaa";
	pr.second = 10;


	crazy_map.insert(pr);
	crazy_map["aaa"] = 10;

	pr.first = "aab"; // Нет двух элементов с одинаковым ключом
	pr.second = -12;

	crazy_map.insert(pr); //Так как ключ совпал, то не произошло вставки (игнорируем)



	crazy_map["1121sdd"] = 100;
	(*crazy_map.find("1121sdd")).second = 100; //Тоже самое, что crazy_map["1121sdd"] = 100;


	cout << crazy_map["aaa"];





	crazy_map.erase("aab"); // Достаточно знать ключ

	//В set ключ = значение

	if (crazy_map.count("aab")) // Достаточно знать ключ
	{


	}



	map<int, int> v;

	for (int i = 0; i < 100; ++i)
	{
		if (v.count(i))
			cout << v[i]; // Создаю новый элемент с тем ключом, который просматриваю


		//И с нулевым значением
	}

	cout << v.size();


	v[-100]++;

	v[134234324] = 23;




}