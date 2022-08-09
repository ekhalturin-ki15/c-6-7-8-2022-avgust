#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <cmath>
#include <fstream>
//G++ #include "bits/stdc++.h"
using namespace std;

#pragma warning(disable : 4996)

void input(int& d)
{
	cin >> d;
}

int sum(int a, int b)
{
	return a + b;

}


struct Math
{
	int a; // Поля [-2^31 2^31-1] переная, но внутри структуры
	int b;
	char ch;// Поля [-128 127]


	void Read() // Метод, но относительно структуры
	{
		cin >> a;
		cin >> b;
		cin >> ch;

	}

};





int main()
{
	FILE* IN;
	FILE* OUT;
	freopen_s(&IN, "input.txt", "r", stdin);
	freopen_s(&OUT, "output.txt", "w", stdout);

	int a = 10;
	unsigned int i = 10;

	const int aa = 1000;

	int q = 50;
	input(q);

	cin >> q;

	//func(300);


	if (1 == 2)
	{


	}
	else
	{


	}


	cout << ((1 == 3) ? 10 : -1);

	switch (q) // Нельзя передавать массивы
	{
	case 10: 

		break;
	case 20:

		
	default:
		break;
	}

	//Цикл
	while (1 == 2)
	{
		q = 100;
		continue; // 1 == 2 

	}

	for (int i = 10; i >=0; ++i) // 1e7
	{
		continue; // ++i i >=0

		break; // Выходим за цикл
	}



	Math q1, w1, e1; // Объекты (Экземпляр структуры)
	q1.a;
	w1.b = 10;


	int* ii = &q;

	Math* qw;
	qw = &q1;


	(*qw).a = 100;
	qw->b = 100;


	//Read();

	qw->Read();

	vector<int> v;
	vector<char> vv;




	return 0;// 

}