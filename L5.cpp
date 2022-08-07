#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>

#pragma warning(disable : 4996) 

using namespace std;




int q; // По умолчанию значение 0
char ch;
std::string s;



int abs(int a)
{
    if (a < 0) return -a;
    return a;
}


long long my_pow(long long a, long long p) // long long
{
    long long x = 1;
    for (int i = 0; i < p; ++i) // O(p)
        x *= a;
    return x;
}


long long bin_my_pow(long long a, long long p) // long long
{
    if (p == 1) return a;// O(log(p)) ~ O(1)
    long long x;
    if (p % 2 == 0)
    {
        x = bin_my_pow(a, p / 2);
        x = x * x;
    }
    else
    {
        x = bin_my_pow(a, p / 2);
        x = x * x;
        x = x * a;
    }
    return x;

}

//Приближеный метод Ньютона

//Целых чисел бин поиск
long long my_crazy_sqrt(long long a)
{
    long long x = a/2;
    while (x * x <= a)
    {
        if (x * x == a) return x;
        ++x;
    }
    return -1;
}


int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);










    powl(10, 5); // double

    my_pow(10, 5);


    cout << round(0.49999999);
    cout << "\n";
    cout << round(1.5);
    cout << "\n";
    cout << floor(0.999);
    cout << "\n";
    cout << ceilf(0.999);


    max(2ll, 2ll);

    min(0.0, 0.3);

    sin(0.32);

    asin(sin(0.32)); //На вход //-1 1 На выход угол в радианах

    cout << "\n";
    cout << log(2.71); // Натуральный логарифм


    double PI = atan2(0, -1);

    cout << "\n";
    cout << sqrt(9);


    cout << "\n";
    cout << pow(9, 0.5);

    

}





