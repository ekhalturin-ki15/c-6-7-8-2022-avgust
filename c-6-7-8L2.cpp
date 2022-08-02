
//Глобальная область видимости
//int a = 0;

//a + a; Нельзя
//function1();Нельзя

int function1() // 
{
	//область видимости функции function1
	int a = 10;
	int b = 20;


	return a + b;

}



int main() // main - особенная (указывает начальную точку входа)
{
	const int h = 10000;
	char t = h;

	//h = 234234;


	1.4334;

	long long w = 3255435e10;

	int aa = w;

	long long k = 10000000000000;

	k++;
	k--;

	int k2 = k;

	char a;
	a = function1();

	//область видимости функции main
	int amontChildren;
	int b;
	//float d;
	long long name;

	unsigned char q;
	char ch3 = 97; //0 127    97 - a
	// - 128 рус

	'a';
	'0';

	char ch = '0';
	char ch2 = ch;
	"s";
	"dsdsdsdsd";

	//на нельзя '2324324324'

	//wchar 

	function1();

	function1();



}