#include <iostream>
#include <functional>
#include <cmath>

using namespace std;


int sum(int a, int b)
{
	return a + b;
}

//Для любителей чистый СИ
int crazy_doing(void* f)
{
	return ( (int (*)(int, int))(f) ) (2, 3);
}

//Нормальный вариант
int crazy_doing(function<int(int,int)> f)
{
	return f(2, 3);
}


int main()
{
	void* v = sum;
	cout << crazy_doing(v);

}