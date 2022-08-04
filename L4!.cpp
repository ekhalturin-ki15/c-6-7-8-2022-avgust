#include <iostream>
#include <algorithm>
#include <list>
#include <cmath>
#include <fstream>

#include <string>

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

int h, w;
int to_odnomeria(int y, int x)
{
    return y * h + x;
}



int main()
{
    freopen("input.txt", "r", stdin); // stdin - это консольный ввод
    freopen("output.txt", "w", stdout);  // stdout - это консольный вывод

    int h;

    cin >> h;
    char** a = new char* [h];
    int* size_a = new int[h];


    for (int y = 0; y < h; ++y)
    {
        int now_size;
        cin >> now_size;
        size_a[y] = now_size;
        a[y] = new char[ now_size ];

        for (int x = 0; x < now_size; ++x)
        {
            cin >> a[y][x];
        }
    }


    for (int y = 0; y < h; ++y)
    {
        int craaaazy_yy;
        if ((y & 1) == 0)
        {
            craaaazy_yy = y + 1;
        }
        else
        {
            craaaazy_yy = y - 1;
        }


            

        for (int x = 0; x < size_a[craaaazy_yy]; ++x)
        {
            cout << a[craaaazy_yy][x];
        }
        cout << "\n";


    }





    /*char*** a = new char**[g];
    for (int z = 0; z < g; ++z)
    {
        a[z] = new char*[h];
        for (int y = 0; y < h; ++y)
        {
            a[z][y] = new char [w];
        }
    }*/










    _CrtDumpMemoryLeaks();


    return 0;


}