#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double h, s;
	cout << "�����뻪���¶�"; cin >> h;
	s = (h - 32) / 1.8;
	cout << fixed<<setprecision(2)<<"��Ӧ�����¶�Ϊ" << s;
return 0;
}

