//求圆锥体积
#include<iostream>
using namespace std;
int main()
{
	int r, h;
	cout << "请输入所求圆锥的底面半径与高" << endl;
	cout << "高="; cin >> h;
	cout << endl;
	cout << "半径="; cin >> r;
	double p = 3.14, v;
	v = (p * r * r * h)/3;
	cout << "所求圆锥体积为" << v;
	return 0;
}

