#include<iostream>
using namespace std;
class student
{
private:
    int num;
    int grade;
public:
    void set5_num(student s[])
    {
        
        cout<<"请输入学生学号：";
        for(int j=0;j<5;j++)
        {
            cin>>s[j].num;
        }
    }
    void set5_grade(student s[])
    {
        
        cout<<"请输入学生成绩：";
        for(int j=0;j<5;j++)
        {
            cin>>s[j].grade;
        }
    }
    int max(student s[])
    {
        
        int t=0,m=0;
        for(int j=0;j<5;j++)
        {
            if(t<s[j].grade)
            {
                t=s[j].grade;
                m=j;
            }
        }
        return s[m].num;
    }
    //没懂什么叫“用指向对象的指针作函数参数“，这样么？
    // int max(const student* s0,const student* s1,const student*s2,const student*s3,const student*s4)
    // {
        
    //     int t=0,m=0;
    //     const student* s[5]={s0,s1,s2,s3,s4};
    //     for(int j=0;j<5;j++)
    //     {
    //         if(t<s[j]->grade)
    //         {
    //             t=s[j]->grade;
    //             m=j;
    //         }
    //     }
    //     return s[m]->num;
    // }
};
int main()
{
    student s[5];
    student *p=&s[0];
    s[0].set5_num(p);
    s[0].set5_grade(p);
    cout<<s[0].max(p);
}


