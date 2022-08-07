#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <vector>

#pragma warning(disable : 4996) 

using namespace std;




int q; // По умолчанию значение 0
char ch;
std::string s;


int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    double d = 1/(543543253453425.);
    double f = 1/(543543253453426.);
    //long double 1e-12
    //double 1e-9
    //float 1e-6

    double crazy_e = 1e-12; // Задаёт точность сравнения (до скольки знаков)
    // Нельзя использовать == если вещественные

    long long a, b;
    cin >> a >> b;


    while ((a != 0) && (b != 0))
    //while (a && b)
    {
        if (a > b) a = a % b;
        else b = b % a;
    }
    cout << a + b;


    return 0;

    if (abs(d - f) < crazy_e)
    {
        cout << "YES";

    }
    else
    {
        cout << "NO";
    }

    printf("%.3lf");



}





