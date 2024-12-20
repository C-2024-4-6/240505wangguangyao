#include<iostream>
using namespace std;
class cuboid
{
private:
    int length;
    int wide;
    int height;
public:
    void set_cuboid(int length,int wide,int height)
    {
        this->length=length;
        this->wide=wide;
        this->height=height;
    }
    void get_volumn()
    {
        int volumn=length*wide*height;
        cout<<volumn<<endl;
    }
};
int main()
{
    cout<<"请依次设置长方柱的长宽高：";
    int a,b,c;
    cin>>a>>b>>c;
    cuboid c1;
    c1.set_cuboid(a,b,c);
    c1.get_volumn();
}