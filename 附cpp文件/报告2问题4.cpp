#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double num1, num2, num3;
	char ch;
	cout << "����������Ҫ���������" << endl;
	cin >> num1; cout << endl;
	cin >> num2; cout << endl;
	cout << "��ѡ����Ҫ���е�����" << endl;
	cin >> ch; cout << endl;
	if (ch == '+')
	{
		num3 = num1 + num2;
		cout << "���Ϊ" << num3;
	}
	else if (ch == '-')
	{
		num3 = num1 - num2;
		cout << "���Ϊ" << num3;
	}
	else if (ch == '*')
	{
		num3 = num1 * num2;
		cout << "���Ϊ" << num3;
	}
	else if (ch == '/')
	{
		num3 = num1 / num2;
		cout << "���Ϊ" << num3;
	}
	else if (ch == '%')
	{
		num3 = int(num1) + int(num2);
		cout << "���Ϊ" << num3;
	}
	else cout << "��Ǹ���������˷Ƿ������";
		return 0;
}

