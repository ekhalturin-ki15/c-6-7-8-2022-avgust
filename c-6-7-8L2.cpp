#include <iostream> // C++ 

using namespace std;

// min max cos sin
//std

char new_string()
{
	return ' ';
}


void out_int(int a)
{
	cout << a << new_string();   // << '\t' << '\r';

}



int funct()
{

	int a;
	cin >> a;


	if (a == 9) // Не выполнится, так как возвр 0
	{
		std::cout << "1\n";
		std::cout << "2\n";

		return 5;
	}



	

	switch (a)
	{
	default:

		cout << "]";

		break;

	case 20:
		cout << "}";

		switch (111)
		{

		case 1:

			if (12)
			{
				return 100;
			}
			else
			{


			}
			break;

		}


		return 3;

	case 10:
		cout << "+";


	}

	cout << "=";



	return 0;
}


int main()
{
	int r = funct();
	char ch = 'c';
	ch = 97;

	min(2, 2);

	cout << sizeof(ch);

	cout << sizeof(r);

    cos(323.23232);

	cout << r;
}