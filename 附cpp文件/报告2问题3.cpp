#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double a, b, c,d;
	cout << "���������õ������ε����߳���" << endl;
	cin >> a; cout << endl;
	cin >> b; cout << endl;
	cin >> c; cout << endl;
	if (a + b > c && a + c > b && b + c > a)
	{
		d = a + b + c;
		cout << "�������ܳ�Ϊ" << d << endl;
		if (a == b || a == c || b == c)
			cout << "��������Ϊ����������" << endl;
		else cout << "�������β��ǵ���������" << endl;

	}
	else cout << "������������޷�����������";
		return 0;
}

