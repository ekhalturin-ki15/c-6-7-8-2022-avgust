#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <cmath>
#include <fstream>
#include <list> // Список
#include <stack>
#include <queue>

#include <random>

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

bool crzyCmp2(My l, My r) // <
{
	if (l.a < r.a) return true;

	return false;
}

bool crzyCmp(int l, int r) // <
{
	if (l >= r) return true;

	return false;
}


int main()
{
	FILE* IN;
	FILE* OUT;
	freopen_s(&IN, "input.txt", "r", stdin);
	freopen_s(&OUT, "output.txt", "w", stdout);

	vector<My> v;
	stack<My> s;

	vector<int> d = {1, 2, 3, 4, 2, 3, 4, 2, 4, 10};
	sort(d.begin(), d.end(), crzyCmp);

	deque<My> dd;
	sort(dd.begin(), dd.end(), crzyCmp2);




	queue<My> q;
	list<My> l;


	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	// My < My
	set< int > ss; // Внутри себя все отсортировано //Не хранит дубликаты


	//O(log(n))--------------
	ss.insert(100); // Вставка по значению

	ss.erase(1);//Удаление по значению

	ss.count(100); //Определение, есть ли такое значение

	ss.begin();

	ss.end();
	//----------------


	


	int n = 3e5;
	for (int i = 0; i < n; ++i) // O(n * log(n))
	{
		int r = rand() * (long long) rand(); // 0 2^31  O(1) % 
		ss.insert(r); 
	}

	for (int i = 0; i < n; ++i) // O(n * log(n))
	{
		if (ss.count(i))
		{
			cout << "YES\n";
		}

	}






}