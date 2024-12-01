#include<iostream>
using namespace std;
    void ord(double arr[],int len)
    {
        for(int i=0;i<len-1;i++)
        {
            for(int j=0;j<len-i;j++)
            {
                if (arr[i]>arr[i+j])
                {
                    double term=arr[i];
                    arr[i]=arr[i+j];
                    arr[j+i]=term;
                }
                
            }
            
        }
    }
    void pr(double *arr,int len)
    {
        for(int i=0;i<len-1;i++)
        {
            cout<<arr[i]<<",";
        }
        cout<<arr[len-1];
    }
int main()
{
    double arr[10];
    cout<<"请输入十个数据：";
    for(int i=0;i<10;i++)
    cin>>arr[i];
    int len=sizeof(arr)/sizeof(arr[0]);
    ord(arr,len);
    pr(arr,len);
    return 0;
}
