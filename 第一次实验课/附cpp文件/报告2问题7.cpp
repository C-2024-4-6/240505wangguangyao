#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
	for (int t = 1; t <= 5; t++)
	{
		for (int s=1; s <= t; s++)
			cout << '*';
		cout << endl;
	}	return 0;
}