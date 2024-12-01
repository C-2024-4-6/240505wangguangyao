#include<iostream>
#include"string.h"
using namespace std;
void ord(int arr[],int len)//从问题二那里借过来的排序函数
{
    for(int i=0;i<len-1;i++)
    {
        for(int j=0;j<len-i;j++)
        {
            if (arr[i]>arr[i+j])
            {
                int term=arr[i];
                arr[i]=arr[i+j];
                arr[j+i]=term;
            }
            
        }
        
    }
}
int main()
{
	cout<<"请输入数组的元素个数：";
    int n;
    cin>>n;
    int* p=new int[n];
    cout<<"请输入数组中相应的元素：";
    for(int i=0;i<n;i++)
        cin>>p[i];
    for(int i=0;i<n;i++)
        cout<<(p+i)<<'\t';//试图输出指针
        cout<<endl;
    for(int i=0;i<n;i++)
        cout<<p[i]<<'\t';//试图输出指针指向的值
        cout<<endl;
    ord(p,n);
    for(int i=0;i<n;i++)
        cout<<*(p+i)<<'\t';//试图用指针输出数组元素
    delete []p;
}
