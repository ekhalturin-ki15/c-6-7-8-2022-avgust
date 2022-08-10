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


	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	// My < My
	set< int > ss; // Внутри себя свё отсортировано //Не хранит дубликаты

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