#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
	int a, b;
	cout << "����������������" << endl;
	cin >> a; cout << endl;
	cin >> b; cout << endl;
	
	int c=1;
	while (c % a != 0 || c % b != 0)
		c++;
	cout << "��С������Ϊ" << c << endl;
	int d;
	d = (a < b ? a : b);
	while (a % d != 0 || b % d != 0)
		d--;
	cout << "���Լ��Ϊ" << d << endl;
		return 0;
}