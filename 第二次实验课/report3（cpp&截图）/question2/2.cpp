#include<iostream>
using namespace std;
bool is_prime(int num) 
{
    int t=num-1;
    while(num%t!=0)
        t--;
    if(t==1)
    return true;
    else
    return false;
}
int main()
{
    int n=0;
    int arr[200];
    for(int i=2;n<=200;i++)
    {
        if(is_prime(i))
        {
            arr[n]=i;
            n++;
        }
    }
    int num=0;
    for(int i=0;i<20;i++)
    {
        for(int j=0;j<10;j++)
        {
            
            cout<<arr[num]<<'\t';
            num++;
        }
        cout<<endl;
    }
    return 0;

}