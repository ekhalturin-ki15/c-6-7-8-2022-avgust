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

    //тип  имя  = начальное значение;


    int N;
    cin >> N;

    // O(N)
    std::vector<int> v(N), vv(N * 2);

    v[9] = 10;

    for (int i = 0; i < N; ++i)
        cout << v[i] << "\n";


    //v = v + vv;

    string s = "abcd", ss = "1234";

    s += ss;

    cout << s;

    //vector<int>::

    //O(1 + 1 + N + 3 + N)
    //O(N)



    for (int i = 0; i < N; ++i) // 10 мил
    {
        cout << "----";

    }


    //O(N)

    //O(1) - не зависит от N



    //O(1000*N) -> O(N)
    for (int x = 0; x < 1000; ++x)
    {
        for (int y = 0; y < N; ++y)
        {
            cout << "8";

        }

    }



    //O(N)


    //O(N^3)

    //string s;
    //cin >> s;
    //s.size();

}





