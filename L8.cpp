#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <cmath>
#include <fstream>
#include <list> // Список
#include <stack>
#include <queue>

#include <set>

//G++ #include "bits/stdc++.h"
using namespace std;

#pragma warning(disable : 4996)



struct My
{
	int a;
	int b;

	My()
	{
		a = 10;
		b = 20;
	}

	string read()
	{
		return to_string(a);

	}
};
int main()
{
	FILE* IN;
	FILE* OUT;
	freopen_s(&IN, "input.txt", "r", stdin);
	freopen_s(&OUT, "output.txt", "w", stdout);

	vector<My> v;
	stack<My> s;
	deque<My> d;
	queue<My> q;
	list<My> l;


	// My < My
	set< int > ss; // Внутри себя свё отсортировано //Не хранит дубликаты

	ss.insert(10);
	ss.insert(10);
	ss.insert(10);
	ss.insert(10);
	ss.insert(10);

	for (set< int >::iterator it = ss.begin(); it != ss.end(); ++it)
	{
		cout << *it << " ";
	}
	cout << "\n";
	ss.insert(12);
	ss.insert(12);
	ss.insert(12);
	ss.insert(12);
	ss.insert(12);


	//ss.erase(12);

	ss.erase(0);

	for (int it : ss)
	{
		cout << it << " ";
	}

	if (ss.find(12) == ss.end())
	{
		cout << "Его нет\n";
	}

	if (ss.count(12))
	{
		cout << "YES\n";
	}


	My a, b;

	/*if (a < b)
	{


	}*/





}