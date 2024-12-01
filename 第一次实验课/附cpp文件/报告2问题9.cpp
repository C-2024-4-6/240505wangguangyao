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
	cout << "总计购买苹果" << N << "个" << endl;
	cout << "总计花费" << cost << "元，" << "平均每日花费" << ave << "元。" << endl;
	return 0;
}