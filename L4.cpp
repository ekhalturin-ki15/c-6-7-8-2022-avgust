#include <iostream>
#include <algorithm>
#include <list>

#include <cmath>

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

    int a = 1, b = 2, c;

    if (a > b)
    {
        c = a;
    }
    else
    {
        c = b;
    }

    a = 2; b = 1;

    //my_crazy_abs(((a < b) ? a : b));
    c = ((a < b)?  a : b);

    c = ternar(a < b, a, b);

   /* if (a != b)
    {
        cout << "No equel\n";
    }
    else
    {
        cout << " Equal\n";
    }*/

    // 1 ? 2 : 3;
    //int d =  ( (a != b) ? 343434 : c = 10 );






    return 0;

    char ch = '!';


    for (int z = 0; z < 10; z++)
    {
        for (int y = 0; y < 10; ++y)
        {
            for (int x = 0; x < 10; ++x)
            {
                cout << ch;
            }

            cout << "\n";
            ++ch;
        }

        cout << "\n";
        cout << "\n";
    }

    return 0;
  

}