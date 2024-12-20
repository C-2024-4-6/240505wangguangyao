#include<iostream>
#include<cstring>
using namespace std;
class Student              //类声明
{
public:                   //公用成员函数原型声明
    void display();
    void set_value(int num1,char* name,char* sex);
private:
    int num;
    char name[20];
    char sex[20];
};
