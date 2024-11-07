#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	for (int i = 1; i <= 4; i++)
	{
		double x, y;
		cout << "请输入x的值为"; cin >> x;
		cout << endl;
		if (0 < x &&x< 1)
		{
			y = 3 - 2 * x;
			cout << y << endl;
		}
		else if (1 <= x&&x < 5)
		{
			y = 1 / (2 * x) + 1;
			cout << y << endl;
		}
		else if (5 <= x &&x< 10)
		{
			y = x * x;
			cout << y << endl;
		}
		else cout << "抱歉，您输入的x不在定义域内";
	}
return 0;
}

