#include<iostream>
using namespace std;
class Time             // 定义Time类
{
private:              // 数据成员为公用的
    int hour;
    int minute;
    int sec ;
public:
    void set_time(int hour,int minute,int sec)
    {
        this->hour=hour;
        this->minute=minute;
        this->sec=sec;
    }
    void get_time()
    {
        cout<<"time.hour:"<<hour<<endl;
        cout<<"time.minute:"<<minute<<endl;
        cout<<"time.sec:"<<sec<<endl;
    }
};
int main()
{
    Time t1;           //定义t1为Time类对象
    cout<<"请输入设定的时间："; //输入设定的时间 
    int a,b,c;
    cin>>a>>b>>c;
    t1.set_time(a,b,c);
    t1.get_time();
return 0;
}
