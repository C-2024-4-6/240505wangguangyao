#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
	int a, b;
	cout << "请输入两个正整数" << endl;
	cin >> a; cout << endl;
	cin >> b; cout << endl;
	
	int c=1;
	while (c % a != 0 || c % b != 0)
		c++;
	cout << "最小公倍数为" << c << endl;
	int d;
	d = (a < b ? a : b);
	while (a % d != 0 || b % d != 0)
		d--;
	cout << "最大公约数为" << d << endl;
		return 0;
}