#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	char ch;
	cout << "������һ����ĸ"; cin >>ch;
	if (ch >= 'a' && ch <= 'z')
	{
		cout << char(ch-32);
	}
	else cout<<ch + 1;//��������ַ���ASCII��ֵ�����Բ�������ַ��˶԰ɣ�
return 0;
}

