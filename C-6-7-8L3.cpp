#include <iostream>
#include <cstdio> // #include "stdio.h"

#pragma warning(disable : 4996)

using namespace std;

int a;



int main()
{

	int a, b;

	const int N = 10;

	for (int step = 0; step < N; ++step)
	{
		printf("YES\n");
		continue;
		scanf("%.3f %i", &a, &b);
		
		if (a == b)
		{
			break;
		}
	}


	//step++; Нельзя, так как переменная в цикле

	////while ( true )


	//int a = 100;
	//int b;



	a = 0;
	while (a < N)
	{
		printf("YOHOHO\n");

		++a;

		continue;
		a *= 10;
	}


	do
	{
		printf("Arrrr\n");

		++a;

		continue;
		a *= 10;


	} while (a < N);





	//do // Выполнится хотя бы раз
	//{
	//	scanf("%i %i", &a, &b);
	//	printf("Number is not equal, try again\n");
	//} while (a != b);


	






}
