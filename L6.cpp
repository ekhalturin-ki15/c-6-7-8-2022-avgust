#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <cmath>
#include <fstream>
#include <tuple>
#include <functional>
#include <algorithm> // sort   merge_sort

//G++ #include "bits/stdc++.h"
using namespace std;

#pragma warning(disable : 4996)


void sort(vector<int>& v)
{
	int n = v.size();
	for (int i = 0; i < n; ++i) // Ищем 0 максимум потом 1 максимум и т.д 
	{
		int maxa = v[0];
		int pos = 0;
		for (int j = 1; j < n - i; ++j)
		{
			if (v[j] > maxa)
			{
				maxa = v[j];
				pos = j;
			}
		}

		std::swap(v[pos], v[n - 1 - i]);

	}
}

int main()
{
	FILE* IN;
	FILE* OUT;
	freopen_s(&IN,"input.txt", "r", stdin);
	freopen_s(&OUT, "output.txt", "w", stdout);

	string crazy_s;
	crazy_s.push_back('2');

	crazy_s.c_str(); // Из string в char*

	vector<int> vv = {2, 3, 4, 5, 6, 1, 2 ,3 , 4, 3};
	vector<int> v;
	int n;
	//cin >> n;

	//v.resize(n);

	//for (int i = 0; i < n; ++i)
	//{
	//	cin >> v[i];
	//}


	int a;
	v.clear();
	while (cin >> a)
	{
		v.push_back(a); // O(1)
	}

	cout << (n = v.size()) << " ";

	cout << v.capacity() << "\n";


	//Сортировка вставкой

	sort(v);

	sort(vv);

	for (int i = 0; i < n; ++i)
	{
		cout << v[i] << " ";
	}
	cout << "\n";
	vv = { 2, 3, 4, 5, 6,
		1, 2 ,3 , 4,
		3, -3, -12, 100, 99, -100 };
	// [-100, 101) -> [0 201)
	//-100 + x = 0
	vector<int> counting(201);

	for (int i = 0; i < vv.size(); ++i)
	{
		int a = vv[i];
		counting[a + 100]++;
	}

	for (int j = -100; j < 101; ++j)
	{
		for (int i = 0; i < counting[j + 100]; ++i)
		{
			cout << j << " ";
		}
	}


}