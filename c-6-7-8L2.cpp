
//���������� ������� ���������
//int a = 0;

//a + a; ������
//function1();������

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

//int toUpper(bool a) // ��� ��� �������� � ��������� ��������� ��������� � ������
//{
//	return a + 1e2;
//}



int main() // main - ��������� (��������� ��������� ����� �����)
{
	int t = 1200;

	int a = My_crazy_sum(1000, t, 'A');

	int b = My_crazy_sum(1, 5.00, 10) + My_crazy_sum(2, 2, 2);


	char ch2 = toUpper('m');

	ch2 = toUpper('m', 'a');

	//ch2 = toUpper(0.343434); //�� ����� ������������

	ch2 = toUpper(23 && 1);
}