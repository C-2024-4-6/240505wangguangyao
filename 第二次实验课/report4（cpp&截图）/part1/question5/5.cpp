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
