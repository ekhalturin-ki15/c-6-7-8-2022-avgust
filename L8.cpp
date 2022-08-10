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

	list<int> ls = {-5};

	ls.insert(ls.begin(), -1);
	ls.insert(ls.end(), -2);

	int pos; cin >> pos;


	int a;
	while (cin >> a)
	{
		ls.push_back(a);
	}

	list<int>::iterator it = ls.begin();

	for (int i = 0; i < pos; ++i)
	{
		if (it == ls.end()) break;
		++it;
	}


	for (int i = 100000; i >= 0; --i)
	{
		ls.insert(it, i / 10); // O(1)
	}

	for (int crazy_it : ls) // Пробежка от begin до end (копирование)
	{
		crazy_it = 1;
	}
	for (int crazy_it : ls) // Пробежка от begin до end (копирование)
	{
		cout << crazy_it << " ";
	}

	for (int& crazy_it : ls) // Пробежка от begin до end (взятие оригинала)
	{
		crazy_it = 1;
	}

	int g = 1000;

	int b = g;

	b = b + 1;

	int& q = g; // Теперь у a два имени (g и q) не создаём переменную

	q = q + 1;



	/*
	for (list<int>::iterator it = ls.begin(); it != ls.end(); ++it)
	{
		cout << *it << " ";
	}
	*/



}