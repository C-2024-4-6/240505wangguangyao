#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	char ch;
	cout << "请输入一个字母"; cin >>ch;
	if (ch >= 'a' && ch <= 'z')
	{
		cout << char(ch-32);
	}
	else cout<<ch + 1;//输出其后继字符的ASCII码值，所以不用输出字符了对吧？
return 0;
}

