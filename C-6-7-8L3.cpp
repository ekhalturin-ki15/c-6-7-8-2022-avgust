#include <iostream>

using namespace std;


int sum(int* a, int bbbbbb)
{ 
	(*a) = 0; // Чтобы получить переменную из другой функции и изменить её (то есть, получаем оригинал)

	return (*a) + bbbbbb;
}






int main()
{
	int a;

	cout << &a << '\n';


	int b;

	cin >> a >> b;


	cout << sum(&a, b) <<'\n';

	cout << a << " " << b;




	//*-> int

	char* adr; // Указатель

	char ch = 'a';

	char& ch2 = ch; //Псевдоним

	adr = &ch;

	//cout << int(adr) + 5;






}
