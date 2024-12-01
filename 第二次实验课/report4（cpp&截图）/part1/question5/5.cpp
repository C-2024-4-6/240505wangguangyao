#include <iostream>
#include "string.h"
using namespace std;
int indexOf(char s1[], char s2[])
{
    int n1=strlen(s1),n2=strlen(s2);
    int t=-1;
    for(int i=0;i<n2-n1;i++)
    {
        for(int j=0,k=i;j<n1;j++,k++)
            if(s1[j]!=s2[k])
            goto skip;
            t=i;
            skip:
            continue;
    }
    return t;
}

int main()
{
    char s1[999],s2[999];
    cout<<"Enter the first string:";
    cin.getline(s1,999);
    cout<<"Enter the second string:";
    cin.getline(s2,999);
    int n=indexOf(s1, s2);
    cout<<"indexOf(\""<<s1<<"\",\""<<s2<<"\") is "<<n;
}















// int indexOf(char *s1, char *s2)
// {
// 	int a,b,index,j,k;
// 	a=strlen(s1);
// 	b=strlen(s2);
// 	bool s3[a];
// 	for(int m=0;m<a;m++)
// 		s3[m]=false;
// 	for(int i=0;i<b-a+1;i++)      //控制s2的首字母
// 	{
// 		for(j=0,k=i;(j<a)&&(k<i+a);j++,k++)      //控制s2的总输出数
// 			if(s1[j]==s2[k])
// 			{
// 				index=i;
// 				s3[j]=true;
// 			}
// 			int h=0;
// 			for(int n=0;n<a;n++)
// 			{
// 				if(s3[n]==false&&i==b-a)
// 				{
// 					return -1;break;
// 				}
// 				if(s3[n])
// 					h++;
// 			}
// 			if(h==a)
// 			{
// 				return index;
// 			}
// 	}
 
// }
