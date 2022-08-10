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


	//set<int>  Ключ должен сравнивать своё значение оператором <
	//map<map<int, int> , int> m;
	map<int, int> m;
	char ch;


	m[0]; // Создадим элемент с указаным ключем и значением 0


	while (cin >> ch)
	{
		// Изначально 0 увеличил до 1
		//А если ключ уже есть, то берем уже записанное значение
		m[ch]++;
	}

	for (auto [k, v] : m)
	{
		cout << k << " = " << v << "\n";
	}


	multiset<int> ms;
	ms.insert(10);
	ms.insert(10);
	ms.insert(10);
	ms.insert(10);


	ms.erase(10);

	ms.insert(10);
	ms.insert(10);
	ms.insert(10);
	ms.insert(10);

	ms.erase(ms.find(10)); // Удалить по итератору (то есть только один элемент)

	cout << ms.count(10);



}