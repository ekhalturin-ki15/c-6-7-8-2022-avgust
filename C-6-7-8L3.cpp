#include <iostream>

using namespace std;


//int sum(int* a, int bbbbbb)
//{ 
//	(*a) = 0; // Чтобы получить переменную из другой функции и изменить её (то есть, получаем оригинал)
//
//	return (*a) + bbbbbb;
//}


int sum(int& name_2_a, int bbbbbb)
{ 
	name_2_a = 0; // Чтобы получить переменную из другой функции и изменить её (то есть, получаем оригинал)

	return name_2_a + bbbbbb;

	//Любые изменения с name_2_a затронут и переменную 'a' из функции main
}

int main()
{

	int a = 8, b = 10;
	//cin >> a >> b;

	cout << sum(b, a) <<" ";


	cout << a << " " << b;

//	int a;
//
//	cout << &a << '\n';
//
//
//	int b;
//
//	cin >> a >> b;
//
//
//	//cout << sum(&a, b) <<'\n';
//
//	cout << sum(a, b) << '\n';
//
//	cout << a << " " << b;
//
//
//
//
//	//*-> int
//
//	char* adr; // Указатель
//
//	char ch = 'a';
//
//	char& ch2 = ch; //Псевдоним
//
//	adr = &ch;
//
//	//cout << int(adr) + 5;






}
