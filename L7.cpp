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


struct CrazyPlayer
{
	int hp;
	int ammo;
	int bullet;

	//CrazyPlayer() = default;

	//Конструктор
	CrazyPlayer(int start_hp)
	{
		hp = start_hp;
		ammo = 100;
		bullet = 0;
	}

	// Полностью совпадает имя структуры (параметры, которых может и не быть)
	CrazyPlayer()//Вызывается при создании
	{
		hp = 100;
		ammo = 0;
		bullet = 1000;
	}
	//Полностью совпадает имя структуры , но в начале ~ (параметры, которых может и не быть)
	~CrazyPlayer() // Вызывается при удалении объекта
	{
		cout << "Destruct";
	}
};

int zero()
{
	{
		CrazyPlayer crazy_object;
	}

	return 0;
}

int main()
{
	FILE* IN;
	FILE* OUT;
	freopen_s(&IN, "input.txt", "r", stdin);
	freopen_s(&OUT, "output.txt", "w", stdout);

	
	CrazyPlayer crazy_object2(10);

	CrazyPlayer* craze_ptr = new CrazyPlayer(200);

	zero();

	delete craze_ptr;

	return 0;
}
