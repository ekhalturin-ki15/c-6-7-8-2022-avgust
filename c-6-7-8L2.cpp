
//Глобальная область видимости
//int a = 0;

//a + a; Нельзя
//function1();Нельзя

int My_crazy_sum(int a, int b, char ch)
{
	return a + b + ch;
}


char toUpper(char ch)
{
	return ch + 'A' - 'a';
}


char toUpper(char ch, char a)
{
	return ch + 'A' - 'a' + a;
}

char toUpper(bool a)
{
	return a + 1e2;
}

//int toUpper(bool a) // Так как название и аргументы полностью идентичны с другой
//{
//	return a + 1e2;
//}



int main() // main - особенная (указывает начальную точку входа)
{
	int t = 1200;

	int a = My_crazy_sum(1000, t, 'A');

	int b = My_crazy_sum(1, 5.00, 10) + My_crazy_sum(2, 2, 2);


	char ch2 = toUpper('m');

	ch2 = toUpper('m', 'a');

	//ch2 = toUpper(0.343434); //Не может определиться

	ch2 = toUpper(23 && 1);
}