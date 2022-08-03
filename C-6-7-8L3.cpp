#include <iostream>
#include <cstdio> // #include "stdio.h"

#pragma warning(disable : 4996)

using namespace std;

int a;



int main()
{

	int a, b;

crazy_laybe:
	scanf("%i %i", &a, &b);

	if (a != b)
	{
		printf("Try again    %i  %c %ull \n", 23, 32 , a);
		goto crazy_laybe; // Ассемблер
	}



	printf("We all exit\n");



}
