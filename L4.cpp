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

    ifstream in("input.txt");


    int a;
    cin >> a;

    int test;
    cin >> test;

    for (int i_test = 0; i_test < test; ++i_test)
    {

        int a, b;

        in >> a >> b;

        cout << a;

        cout << "\n";
    }



    return 0;
  

}