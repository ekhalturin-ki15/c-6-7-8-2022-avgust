#include <iostream>
#include <fstream>
#include <vector> //~20% дольше
#include <string>
#include <forward_list>
#include <list> // Список
#include <random>

//G++ #include "bits/stdc++.h"
using namespace std;

#pragma warning(disable : 4996)




int main()
{
	FILE* IN;
	FILE* OUT;
	//freopen_s(&IN, "input.txt", "r", stdin);
	//freopen_s(&OUT, "output.txt", "w", stdout);

	//srand(  time(0) ); // Задаём Сид рандома
	srand( 4 );

	ifstream crazy_input("input.txt");

	ofstream log("output.txt");

	list<char> mapa;

	vector<int> pos;


	int N, len;
	crazy_input >> N >> len;


	mapa.assign(len, '#');

	//rand(); // 5 10 6 7 ... 5 10 6 7

	//mt19937 ma; // 

	rand(); // int 0 - 

	
	int gener_outs = N;

	while (gener_outs != 0)
	{
		int i = 0;
		for (list<char>::iterator it = mapa.begin(); it != mapa.end(); ++it, ++i)
		{
			char& ch = *it;

			int r = rand() % 2;

			if ((ch == '#') && (r == 1))
			{
				int r2 = rand() % 5;

				pos.push_back(i);
				--gener_outs;

				switch (r2)
				{
				case 0:
					ch = '@';
					break;
				case 1:
					ch = '?';
					break;

				case 2:
					ch = '%';
					break;

				case 3:
					ch = '}';
					break;

				case 4:
					ch = '&';
					break;
				}

			}

			if (gener_outs == 0) break;
		}
		if (gener_outs == 0) break;
	}

	


	int rand_head = rand() % pos.size();

	list<char>::iterator it = mapa.begin();

	(advance(it, pos[rand_head]));
	
	*it = '!';

	for (list<char>::iterator it = mapa.begin(); it != mapa.end(); ++it)
	{
		log << *it;
	}
	log << "\n";


	char ch;
	int hp = 1000;

	while ((hp > 0) && (N > 0))
	{
		
		cout << hp << "\n";
		for (list<char>::iterator it = mapa.begin(); it != mapa.end(); ++it)
		{
			cout << *it;
		}
		cout << "\n";
		cin >> ch;
		cout << "\n";
		for (list<char>::iterator it = mapa.begin();
			it != mapa.end();
			++it)
		{
			//char& cit = *it;

			if (*it == ch)
			{
				while (*it == ch)
				{

					list<char>::iterator next_it = next(it, 1); // запомнил следующего
					mapa.erase(it);
					--N;
					it = next_it;
					if (it == mapa.end()) break;
				}

				break;
			}
		}

		for (list<char>::iterator it = mapa.begin();
			it != mapa.end();
			++it)
		{
			int r;
			switch (*it)
			{
			case '@':
				
				r = rand() % 5;
				if (r != 4)
					hp -= 5;
				break;

			case '?':

				r = rand() % 3;
				if (r == 0)
					hp -= 20;

				break;

			case '%':

				hp -= 2;

				break;

			case '}':

				r = rand() % 5;
				if (r == 0)
					hp += 2;
				else
					hp -= 3;

				break;

			case '&':
				r = rand() % 6;
				if (r == 0)
					hp += 3;
				else
					hp -= 5;

				break;

			case '!':
				hp -= 20;
				break;
			}



		}

	}
	cout << "\n";
	if (hp <= 0)
		cout << "YOU DIED, game over";
	else
		cout << "C++ rulezz";




	return 0;
}
