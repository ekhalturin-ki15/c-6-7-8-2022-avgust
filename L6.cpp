#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <cmath>
#include <fstream>
//G++ #include "bits/stdc++.h"
using namespace std;

int main()
{
	cout << setprecision(20) << fixed << 1 / 3.;

	cout << setw(10) << 'a' << setw(10) << 'b' << setw(10) << 'c';

	int i(5); // int i = 5;

	ifstream crazy_input("input.txt");

	std::vector<int> crazy_mas(100);

	crazy_mas[10] = 0;

	cout << crazy_mas[1];

}