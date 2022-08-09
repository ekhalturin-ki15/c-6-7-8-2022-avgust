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

	list<double> crazyList;

	crazyList.push_back(23.2323);

	crazyList.pop_back();

	crazyList.push_front(2323.1212);

	crazyList.insert
	(  next(crazyList.begin() , 10 ) , 34.5); // Вставка в указанную позицию

	crazyList.erase(next(crazyList.begin(), 10));

	//crazyList[5];
	//Очень долгое (O(N)) обращение к элементу


	crazyList.begin();// iterator

	crazyList.rbegin();// reverse_iterator

	crazyList.end();


	//crazyList.insert(next(crazyList.begin() + 10), 34.5);  + -





	vector<char> vc; // 0

	vc.push_back('a'); 

	vc.push_back('b');

	//   ab

	vc.push_back('e');

	//   abe

	vc.capacity();


	vc[5]; // O(1)

	//*(vc + 5);

	return 0;// 

}
