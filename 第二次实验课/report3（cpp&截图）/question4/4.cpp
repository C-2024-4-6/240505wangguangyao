#include "mytriangle.h"
int main()
{
    cout<<"请输入三角形的三边长度"<<endl;
    double side1,side2,side3;
    cin>>side1>>side2>>side3;
    if(is_valid(side1,side2,side3))
    cout<<"面积为"<<area(side1,side2,side3);
    else
    cout<<"三边长度无法构成三角形";
    return 0;
}