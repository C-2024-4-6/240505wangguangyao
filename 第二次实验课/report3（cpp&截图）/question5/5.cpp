#include <iostream>
using namespace std;
int a(int i)
{
    int t;
    if(i==0)
    t=1;
    else
    t=(a(i-1)+1)*2;
    return t;
}
int main()
{
    int day=10;
    int n=a(day);
    cout<<"第一天摘到的桃子为"<<n<<"个";
}