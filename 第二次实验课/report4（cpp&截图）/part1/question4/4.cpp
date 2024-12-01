#include<iostream>
using namespace std;
void merge(const int list1[], int size1, const int list2[], int size2, int list3[])
{
    for(int i=0;i<size1;i++)
    list3[i]=list1[i];
    for(int i=size1;i<size1+size2;i++)
    list3[i]=list2[i-size1];
}
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
    int n1,n2;
    cout<<"请输入第一个数组的元素个数：";
    cin>>n1;
    int list1[n1];
    cout<<"请输入第一个数组的元素";
    for(int i=0;i<n1;i++)
        cin>>list1[i];
    cout<<"请输入第二个数组的元素个数：";
    cin>>n2;
    int list2[n2];
    cout<<"请输入第二个数组的元素";
    for(int i=0;i<n2;i++)
        cin>>list2[i];
    int list3[n1+n2];
    merge(list1,n1,list2,n2,list3);
    ord(list3,n1+n2);
    cout<<"合并后的数组为：";
    for(int i=0;i<n1+n2;i++)
    cout<<list3[i]<<" ";
    return 0;
}