#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double num1, num2, num3;
	char ch;
	cout << "请输入您需要计算的数据" << endl;
	cin >> num1; cout << endl;
	cin >> num2; cout << endl;
	cout << "请选择您要进行的运算" << endl;
	cin >> ch; cout << endl;
	if (ch == '+')
	{
		num3 = num1 + num2;
		cout << "结果为" << num3;
	}
	else if (ch == '-')
	{
		num3 = num1 - num2;
		cout << "结果为" << num3;
	}
	else if (ch == '*')
	{
		num3 = num1 * num2;
		cout << "结果为" << num3;
	}
	else if (ch == '/')
	{
		num3 = num1 / num2;
		cout << "结果为" << num3;
	}
	else if (ch == '%')
	{
		num3 = int(num1) + int(num2);
		cout << "结果为" << num3;
	}
	else cout << "抱歉，您输入了非法运算符";
		return 0;
}

