#include <iostream>
#include <algorithm>
#include <list>
#include <cmath>
#include <fstream>

#define _CRTDBG_MAP_ALLOC
#include <stdlib.h>
#include <crtdbg.h>

#pragma warning(disable: 4996) 

using namespace std;

long long  my_crazy_abs(long long x)   // |-x| = x
{
    long long ret = x;

    if (x < 0) ret = -x;
    else ret = x;

    return ret;
}

void f1(const int& r)
{
    //r = 100;
    cout << r;

}

//mod
void divide_on_two(long long& a)
{
    long long& s = a;
    //long long s = a / 2;

   // char ch;

   // bool bl;

    cout << &s << "\n";

    cout << &a << "\n";
    //a /= 2;

    //a /= 2;

    a = a / 2;

}


int ternar(bool bl, int a, int b)
{
    if (bl)
        return a;
    else
        return b;

}



int main()
{
    //while (true)
    //{
    //    int* aa;
    //    aa = new int; // Существует до перезагрузки ОС

    //    int a;
    //    a = 500;
    //}


    freopen("input.txt", "r", stdin); // stdin - это консольный ввод
    freopen("output.txt", "w", stdout);  // stdout - это консольный вывод

    //int a, b, c;


    int n;
    cin >> n;

    int a[1000]; // [0 11) Статическое объявление

    int* b = a;

    int index = 0;


    for (int i = 0; i < n; ++i)
    {
        //[x]  ~  *( + x)
        cin >> *(a + i); //aka    cin >> a[ i ];

    }


    for (int j = 0; j < n; j++)
    {
        cout << a[j] << " ";
    }


    unsigned long long* crazy_ptr; // указатель на int

    int* bb = new int;

    char* cc = new char;

    crazy_ptr = new unsigned long long;

    delete crazy_ptr;
    delete bb;
    delete cc;

    //cin >> a >> b >> c;


    _CrtDumpMemoryLeaks();
    return 0;
  

}