#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	const float p = 0.8;
	int i,n=2,N = 0;
	for (i = 0; n < 100; i++)
	{
		N = N+ n;
		n = n * 2;
	}
	float cost = p *N,ave=cost/i;
	cout << "�ܼƹ���ƻ��" << N << "��" << endl;
	cout << "�ܼƻ���" << cost << "Ԫ��" << "ƽ��ÿ�ջ���" << ave << "Ԫ��" << endl;
	return 0;
}