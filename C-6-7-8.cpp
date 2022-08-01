int main()
{
	int a; // 4 байт под число  -+ -2 ^ 31 ... 2^31 - 1
	__int32 b;  // 4 байт под число
	short s = 10000; // 2 байт 65000 
	long long ll; // 8 байт   -2^63        2^63 - 1      2^10 10^3 2^60   10^18  

	unsigned long long ull; // 0 2^64-1   11111111111111111111111111111111111111
	__int8 bbb;


	char ch; // 1 байт
	ch = s;

	unsigned char uch;

	ch = 'a'; // символы указываются через одинарные

	"string"; // Через двойные строка

	//ch ="string"; так нельзя так как в один символ строка не записывется

	float f; // 4 байт (как на int)  3 байт 1 байт мантису
	double d; // 8 байт (как на int) 
	long double ld;// 10 байт 

	f = 1.23233;
	f = 123e100; // 123 * 10^100
	f = 123e-10; // 123 * 10^-10   0,0000000123



	bool bl; // 1 бит  
	bl = true;
	bl = false;

	bool bl2;


	int in; // 4 байт

	const unsigned char cch = 1002;


	//const int Кол_во_пальцев = 5;

	//a = Кол_во_пальцев + Кол_во_пальцев;


	const int child1 = 25; // 
	int child2 = 323;

	child1 + child2;



}