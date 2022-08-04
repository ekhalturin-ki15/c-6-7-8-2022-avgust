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



int main()
{

    //'a';

    //ch<='A';


    int y = 0;
    while (y < 10)
    {
        if ((y == 0) || (y == 9))
        {
            for (int x = 0; x < 10; ++x)
            {
                cout << "-";
            }

        }
        else
        {
            int x = -1;
            do
            {
                ++x;
                if ((x == 0) || (x == 9))
                {
                    cout << "|";
                }
                else
                { 
                    if ((x == 3) || (x == 6))
                        if (y == 4)
                        {
                            cout << (unsigned char)(219);
                            continue;
                        }


                    cout << " ";



                }

                
            } while (x < 10);

        }

        ++y;

        cout << "\n";
    }


    //for (auto& it: S)

    return 0;

    int a = 1;
    switch (a)
    {
    case 1:
        cout << "0";


    case 2:
        cout << "-";
        ++a;
        
        break;


    case 3:
        cout << "0";
    }


    return 0;
    
    long long s = 1000;

    cout << &s << "\n";

    divide_on_two(s);


    return 0;


    int aa; // 4b

    char ch = 'Л';//1b

    //ch = -32;


    bool bl; // true false


    float f;// 4b

    double d;// 8 b

    long long ll; // 8 b


    //unsigned char int long long

    //wchar_t w = L'ы';
    //wstring s = L"fdsfdsf";

    


}