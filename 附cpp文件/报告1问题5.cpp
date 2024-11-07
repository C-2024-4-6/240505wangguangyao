#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double h, s;
	cout << "请输入华氏温度"; cin >> h;
	s = (h - 32) / 1.8;
	cout << fixed<<setprecision(2)<<"对应摄氏温度为" << s;
return 0;
}

