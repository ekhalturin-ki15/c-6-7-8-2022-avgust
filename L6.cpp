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

	vector<int> vv = { 2, 1, 2, 34, 2, 4, 3 ,54 ,3 ,3 , 2 };

	//int* v;
	//sort(v, v + 10);

	std::sort(vv.begin(), vv.begin() + vv.size());

	sort(vv.begin(), vv.end()); // O(N log(N))
	
	double d = 232131e-10, b = 324324e-12;

	double craze_eps = 1e-4;

	//if (d == b) // Ошибка

	if (abs(d-b)<= craze_eps) // то равны





}