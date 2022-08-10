#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <cmath>
#include <fstream>
#include <list> // Список

//G++ #include "bits/stdc++.h"
using namespace std;

#pragma warning(disable : 4996)

int main()
{
	FILE* IN;
	FILE* OUT;
	freopen_s(&IN, "input.txt", "r", stdin);
	freopen_s(&OUT, "output.txt", "w", stdout);


	vector<int> v, q;

	//v[10]; // O(1)

	//Частые асимптотики O(1) O(n) O(n^2) O(sqrt(n)) O(log(n))


	v.push_back(100); //  n  O(1) 
	v.size();     // 1 2 3 4 5  6 7 8
	v.capacity(); //  1  2  4       8 16    32 O(n)  С запасом

	v.pop_back(); // n O(1)

	//v.push_front(100); // O(n)


	int Q;
	cin >> Q; // 3
	//v[3]  v[4];

	v = { 4, 3, 2, 1, 5, 6, 4, 3, 2, 1 };

	v.resize(v.size() + 1);

	for (int i = v.size() - 2; i >= Q + 1; --i)
	{
		v[i + 1] = v[i];
	}
	v[Q + 1] = 7;

	for (vector<int>::iterator it = v.begin(); it != v.end(); ++it)
	{
		cout << *it << " ";
	}

	v.assign(10, -1);

	v.resize(1000);


	list< vector< char > > l;

	cout << sizeof(int); // Функция возвращает размер типа данных


	



}