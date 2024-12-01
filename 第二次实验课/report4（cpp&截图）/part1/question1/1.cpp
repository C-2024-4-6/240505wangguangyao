#include <iostream>
using namespace std;
int main()
{
    int arr[10];
    int n=0,t;
    cout << "Enter ten numbers:";
    cin>>arr[0];
    for (int i = 0; i < 9; i++)
    {
        cin>>t;
        for(int j=n;j>=0;j--)
            if (arr[j] == t)
                goto skip;//for循环只到if，遍历完没相同的在加到数组里
            n++;//n同时记录一共存入几个数据，方便最后输出
            arr[n]=t;
        skip:
            continue;
    }
    for(int i=0;i<=n;i++)
    {
        cout << arr[i] << '\t';
    }
    return 0;
}