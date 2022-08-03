#include <iostream>

using namespace std;

int main()
{
	long long LL;
	long long* andres_crazy_LL;
	// (long long*) (long long)
	andres_crazy_LL = &LL;

	LL = 2323;


	cout << *andres_crazy_LL << "    " << LL << '\n'; // Всегда совпадут


	cout << (long long) (andres_crazy_LL) << " " << andres_crazy_LL << '\n';;


	//long long* a; // Указатели
	//long long* b;


	//cout << &ch;

	int a = 5;


	cout << a << " " << *(&a) << " "<< &a << '\n';;

	// int &
	int& b = a;

	cout << a << " " << b;

	a++;


	cout << a << " " << b;


	int* bb = &a;
	*(bb);



	int& bbb = a; // Чтобы не писать звёздоски (второе имя переменной)
	bbb;

}
