#include <iostream>
#include <istream>

using namespace std;
int main()
{
	char str[1000];
	cout << "������һ���ַ���";
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
	cout << "Ӣ����ĸ�ĸ���Ϊ��" << ch << "����" << '\n';
	cout << "�ո�ĸ���Ϊ��" << sp << "����" << '\n';
	cout << "���ֵĸ���Ϊ��" << dig << "����" << '\n';
	cout << "�����ַ��ĸ���Ϊ��" << oth << "����" << '\n';
		return 0;
}

