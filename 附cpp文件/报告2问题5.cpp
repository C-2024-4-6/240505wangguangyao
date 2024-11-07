#include <iostream>
#include <istream>

using namespace std;
int main()
{
	char str[1000];
	cout << "请输入一段字符：";
	cin.getline(str, 1000);
	
	int ch = 0, sp = 0, dig = 0, oth = 0;
	int len=strlen(str);
	
	for (int i = 0; i < len; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			ch++;
		else if(str[i] >= 'A' && str[i] <= 'Z')
			ch++;
		else if (str[i] == ' ')
			sp++;
		else if (str[i] >= '0' && str[i] <= '9')
			dig++;
		else oth++;
	}
	cout << "英文字母的个数为：" << ch << "个。" << '\n';
	cout << "空格的个数为：" << sp << "个。" << '\n';
	cout << "数字的个数为：" << dig << "个。" << '\n';
	cout << "其他字符的个数为：" << oth << "个。" << '\n';
		return 0;
}

