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


    std::string name_smail;//Не надо delete

    cin >> name_smail;
    

    //std::string name_smail;

    //cin >> name_smail;

    //char* name_smail;

    //int size_name;
    //cin >> size_name;
    //name_smail = new char[size_name + 1];

    //for (int i = 0; i < size_name; ++i)
    //{
    //    cin >> name_smail[i];
    //}
    //name_smail[size_name] = '\0';


  

    cin >> h >> w;

    //char a[h][w]; // y  x

    //char* a = new char[h * w];
    char** a = new char* [h];
    for (int y = 0; y < h; ++y)
        a[y] = new char[w];


    //system("pause");

    for (int y = 0; y < h; ++y)
    {
        for (int x = 0; x < w; ++x)
        {
            a[y][x] = '.';
            if (y == h / 3)
                if ((x == w / 5) || (x == 4 * w / 5))
                {
                    a[y][x] = '0';
                }
        }

        if (y == 8 * h / 10)
        {
            for (int x = w / 10; x <= 9 * w / 10; ++x)
            {
                a[y][x] = '_';
            }

            a[y][w / 10] = '\\';
            a[y][9 * w / 10] = '/';

        }

    }

   /* int i = 0;
    while (name_smail[i] != '\0')
        cout << name_smail[i++];*/

    cout << name_smail;

    for (int y = 0; y < h; ++y)
    {
        cout << "\n";
        for (int x = 0; x < w; ++x)
        {
            cout << a[y][x];
        }

    }


    
    for (int y = 0; y < h; ++y)
        delete [] a[y];

    delete[] a;


    _CrtDumpMemoryLeaks();


    return 0;


}