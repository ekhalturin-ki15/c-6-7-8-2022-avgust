#include <iostream>
#include <cstdio> // #include "stdio.h"

#pragma warning(disable : 4996)

using namespace std;


void zeroing(int& a, int b) // Нельзя делать псевдоним на временные const
{
	a = 0; 
	b = 0;
}


int main()
{

	int a = 0, b;

	char ch;
	//scanf("%c %i %ll",  ((char *)(&a)) + 3, &b);

	scanf_s("%d %d", (&a), &b);



	zeroing(a, b);

	zeroing(a, 100);


	//printf("%c%d   %ll %i", 213312, 's', ch, b);

	printf("%d %d", a, b);

	//printf();


	//cin >> a >> b;
	//cout << a << " " << b;

}
