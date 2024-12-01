#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double z, xn, xm;
	cout << "请输入初始值" << endl;
	cin >> z; 
	cout << endl;
	if (z > 0)
	{
		xn = z;
		xm = (z/xn + xn) / 2;
		double c = (xn - xm > 0 ? xn - xm : xm - xn);
		while (c >= 10e-10)
		{
			xn = xm;
			xm = (z / xn + xn) / 2;
			c = (xn - xm > 0 ? xn - xm : xm - xn);
		}
		cout << "平方根为" <<fixed<<setprecision(10)<< xm;
	}
	else cout << "该初始值无平方根" << endl;
	return 0;
}