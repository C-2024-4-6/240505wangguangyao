#include<iostream>
using namespace std;
int cmul(int &a,int&b)
{
    int c=(a>b?a:b);
	while (c % a != 0 || c % b != 0)
		c++;
    return c;
}
int cdiv(int &a,int&b)
{
    int c=(a>b?a:b);
 	while (a % c != 0 || b % c != 0)
		c--;
        return c;

}
int main()
{
    int a,b;
    cout<<"请输入两个数"<<endl;
    cin>>a>>b;
    int c=cmul(a,b);
    int d=cdiv(a,b);
    cout<<"最小公倍数为"<<c<<endl;
    cout<<"最大公倍数为"<<d<<endl;
    return 0;
}