﻿#include <iostream>
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
    freopen("input.txt", "r", stdin); // stdin - это консольный ввод
    freopen("output.txt", "w", stdout);  // stdout - это консольный вывод

    int a = 5;
    int b = 10;
    int c;

    c = (a = 1, b = 3);

    //cin >> n;

    /*int* a = new int[n];

    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    int count = 0;
    for (int i = n - 1; i >= 1; --i)
    {
        if ((a[i] > a[i - 1]) and (a[i] > a[i + 1]))
        {
            ++count;
        }
    }

    cout << count;

    delete[] a;*/
    _CrtDumpMemoryLeaks();
    return 0;
  

}