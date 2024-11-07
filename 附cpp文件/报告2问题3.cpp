#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double a, b, c,d;
	cout << "请输入设置的三角形的三边长度" << endl;
	cin >> a; cout << endl;
	cin >> b; cout << endl;
	cin >> c; cout << endl;
	if (a + b > c && a + c > b && b + c > a)
	{
		d = a + b + c;
		cout << "三角形周长为" << d << endl;
		if (a == b || a == c || b == c)
			cout << "该三角形为等腰三角形" << endl;
		else cout << "该三角形不是等腰三角形" << endl;

	}
	else cout << "您输入的三边无法构成三角形";
		return 0;
}

