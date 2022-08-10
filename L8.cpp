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

int main()
{
	FILE* IN;
	FILE* OUT;
	freopen_s(&IN, "input.txt", "r", stdin);
	freopen_s(&OUT, "output.txt", "w", stdout);

	vector<int> v;

	stack<int> st; // Для других программистов // Обрезанный vector

	st.push(10); v.push_back(10);
	st.pop();    v.pop_back();
	st.top();    v[v.size() - 1];

	//st[2];		 
	//v[2];

	

	deque<int> d; // Улучшенный vector Двусторонняя очередь

	d.push_front(100);

	d.pop_front();

	queue<int> q; // Для других программистов // Обрезанный deque

	q.push(10); d.push_back(10);
	q.pop();    d.pop_front();
	q.front();  d[0];
	d[10];
	//q[10];



}