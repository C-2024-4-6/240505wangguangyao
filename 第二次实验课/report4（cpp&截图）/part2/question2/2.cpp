#include<iostream>
#include"string.h"
using namespace std;
int parseHex(const char *const hexString)
{
    int result=0;
    int len=strlen(hexString);
    for(int i=0;i<len;i++)
    {
        
        if(hexString[i]>='A'&&hexString[i]<='G')
        {
            int t=1;
            for(int j=0;j<len-i-1;j++)
            {
                t=16*t;
            }
            result=result+((hexString[i]-'A')+10)*t;
        }
        else if(hexString[i]-'0'>=0&&hexString[i]-'0'<=9)
        {
            int t=1;
            for(int j=0;j<len-i-1;j++)
            {
                t=16*t;
            }
            result=result+(hexString[i]-'0')*t;
        }
        
    }
    return result;
}
int main()
{
    cout<<"请输入需要转化的16进制数字:";
    char hexString[999];
    cin.getline(hexString,999);
   cout<<parseHex(hexString);
    return 0;
}