#include <iostream>
#include <algorithm>
#include <list>
#include <cmath>
#include <fstream>


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

    //int a, b, c;


    int n;
    cin >> n;


    int a[11]; // [0 11) Статическое объявление

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


    


    //cin >> a >> b >> c;



    return 0;
  

}