#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

#pragma warning(disable : 4996) 

using namespace std;




int q; // По умолчанию значение 0
char ch;
std::string s;


int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    //тип  имя  = начальное значение;

    int a = 0;
    long long ll = 0x0000FFFF;  // нуль икс 

    cin >> s;

    //if (  Условие  )

    if (s == "five_lecture")
    {
        cout << "YES";

    }
    else
    {
        cout << "NO";

    }
    cout << "\n"; // Перенос строки в выводе

    switch (q)
    {
    case 0:
        cout << "-";
    case 1:
        cout << " ";
    default:
        cout << "-";
    }

    int f = (s == "aaa") ? 10 : -10;


    cout << ((s == "aaa") ? "YES" : "NO");

    cout << "\n";
    while (s == "daa")
    {
        cout << "%%%%%%%%\n";
        s[0]++; // Как с массивом, изменяем символ с индексом 0
    }





    do//while (s == "daa")
    {
        cout << "#########\n";
        s[0]++; // Как с массивом, изменяем символ с индексом 0
    } while (s == "daa");


    for (int i = 0; i < 10; ++i)   // [0 10)
    {
        cout << "!!!!!!!!!!\n";


    }

   // int N;
   // cin >> N;

    int crazy_mas[1000];

    for (int i = 0; i < 1000; ++i)   // [0 10)
    {
        crazy_mas[i] = ++i;	 // Выполняется ++i до присваивания
    }


    cout << crazy_mas[201];


    char* ch;

    ch = new char[1001];



    ch[10] = '\0';

    cout << ch;


    long long mas_ll[100][20];

    mas_ll[50][10];


    long long** dynamic_mas_ll; //размер как у mas_ll

    dynamic_mas_ll = new long long* [100];

    for (int i = 0; i < 100; ++i)
        dynamic_mas_ll[i] = new long long[20];


    dynamic_mas_ll[50][10] = 324234324;

    for (int i = 0; i < 100; ++i)
        delete[] dynamic_mas_ll[i];

    delete [] dynamic_mas_ll;







}





