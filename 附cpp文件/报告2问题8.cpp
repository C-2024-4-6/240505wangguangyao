#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double z, xn, xm;
	cout << "�������ʼֵ" << endl;
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
		cout << "ƽ����Ϊ" <<fixed<<setprecision(10)<< xm;
	}
	else cout << "�ó�ʼֵ��ƽ����" << endl;
	return 0;
}