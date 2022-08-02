
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

	100 + 324234; // int

	100 + 45435.;

	4535345435435345; // long long

	int a = -1 << 20; // Бит знака не участвует в сдвигах

	int e = 0x400'00FF;

	unsigned int qq = e;

	e = unsigned int (e) << 20;


	float f = 0.2323;


	int aaaa = int(f) + int(f) + int(f) + int(f) + int(f) + int(f) + int(f) + int(f) + f + f + f + f + f;


	int qqq = (1 - 2) * 32;


	int qqqqqq = (1 - 2) * 32.0;
	//Одно и тоже, что
	int qqqqqq2 = (1 - 2) * float(32);

	//int name = q();
	q();


	float t = 10 / sum();



	long long error = 100 * 1000000000; // переполнение

	//long long f = 100 * 1000000000ll; // ll на конце

	//f = 100 * 1000000000ull;
	//f = 100 * 1000000000u;

	int aaaaa = sum();


	sum() + sum();


}