
//Глобальная область видимости
//int a = 0;

//a + a; Нельзя
//function1();Нельзя

int sum() // 
{
	return 6;
}


void q() // Процедура
{
	int a = 23;
	a = a + a - a * a; // -a*(a-2)


	//return a;
}


int main() // main - особенная (указывает начальную точку входа)
{

	//int name = q();
	q();


	float t = 10 / sum();



	long long error = 100 * 1000000000; // переполнение

	long long f = 100 * 1000000000ll;

	f = 100 * 1000000000ull;
	f = 100 * 1000000000u;

	int a = sum();


	sum() + sum();


}