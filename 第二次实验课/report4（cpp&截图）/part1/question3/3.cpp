#include<iostream>
using namespace std;
int main()
{
    bool box[100]={0};
    for(int i=1;i<=100;i++)
    {
        for(int j=i-1;j<100;)
        {
            if(box[j])
            box[j]=0;
            else
            box[j]=1;
            j=j+i;
        }
    }
    for(int i=0;i<100;i++)
    {
        if(box[i])
        cout<<i+1<<'\t';
    }
    return 0;
}