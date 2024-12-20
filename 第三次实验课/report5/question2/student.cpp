#include "student.h"
void Student::display()         //在类外定义display类函数
{
    cout<<"num:"<<num<<endl;
    cout<<"name:"<<name<<endl;
    cout<<"sex:"<<sex<<endl;
}
void Student::set_value(int num,char name[20],char sex[20])
{
    this->num=num;
    strcpy(this->name,name);
    strcpy(this->sex,sex);
}