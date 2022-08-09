#include <iostream>
#include <vector> //~20% дольше
#include <string>
#include <forward_list>
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

	vector<int> v = {2, 3, 4, 2, 1, 2, 3, 3, 4, 4};

	list <int> l = { 2, 3, 4, 5, 2, 3, 4, 5, 6, 6, 2, 3 };

	//l.resize()

	vector<int>::iterator crazy_it;

	list<int>::iterator list_it;

	crazy_it = v.begin();

	crazy_it = v.end();


	for (crazy_it = v.begin(); crazy_it != v.end(); crazy_it += 2)
	{
		cout << (*crazy_it);
	}

	cout << "\n";

	cout << endl; // Для общения двух программ cout.flush() очистка буфера вывода
	//Совокупность команд//cout << "\n"; cout.flush();

	for (list_it = l.begin(); list_it != l.end(); list_it++)
	{
		cout << (*list_it);
	}

	cout << "\n\n";

	list_it = l.end();

	for (int i = 0; i < l.size(); i++)
	{
		--list_it;
		cout << (*list_it);	
	}

	cout << "\n\n";

	for (list_it = l.end(); list_it != l.begin(); )
	{
		--list_it;
		cout << (*list_it);
	}
	cout << "\n\n";
	list<int>::reverse_iterator rlist_it; // Нельзя исп. обычный итератор

	for (rlist_it = l.rbegin(); rlist_it != l.rend(); rlist_it++)
	{
		cout << (*rlist_it);
	}

	return 0;
}
