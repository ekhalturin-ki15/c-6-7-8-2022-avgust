#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <iomanip>

#pragma warning(disable : 4996) 

using namespace std;

//double dis(int x, int y)
//{
//    return sqrt(x * x + y * y);
//}

struct MyCrazyString
{
    char* s;
    int crazySize;
};

MyCrazyString CinMyCrazyString()
{
    char ch;
    MyCrazyString answer;
    //answer.s = 0;
    answer.s = nullptr;
    answer.crazySize = 0;


    while (true)
    {
        cin >> noskipws >> ch;
        if (ch == ' ') break;

        char* tmp_s = new char [answer.crazySize + 1];
        for (int i = 0; i < answer.crazySize; ++i)
            tmp_s[i] = answer.s[i];

        tmp_s[answer.crazySize] = ch;

        delete[] answer.s;
        answer.s = tmp_s;
        answer.crazySize++;
    }

    return answer;
}





struct CrazyPoint
{
    int x;
    int y;
    int z;
    string name;
};

double dis(CrazyPoint p)
{
    return sqrt(p.x * p.x + p.y * p.y);
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    CrazyPoint p1, b2;
    p1.x = 10;
    p1.y = 0;
    p1.z = 0;

    p1.name = "A";

    CrazyPoint p2;
    p2.x = 5;
    p2.y = 21;
    p2.z = 0;

    p2.name = "B";

    CrazyPoint p3, p4;

    p4.name = "23";


    //int x1 = 10, y1 = 0;
    //int x2 = 5, y2 = 21;

    if (dis(p1) < dis(p2))
    {
        cout << "Первая точка ближе\n";
        //cout << "The First point is near in centroid\n";
    }
    else
    {
        cout << "Вторая точка ближе\n";
        //cout << "The Second point is far in centroid\n";
    }


    MyCrazyString str, b4;
    str = CinMyCrazyString();
    b4 = CinMyCrazyString();
}





