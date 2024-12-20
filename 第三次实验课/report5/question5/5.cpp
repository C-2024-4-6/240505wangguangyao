#include<iostream>
using namespace std;
class Point
{
private:
    int x, y;
public:
    Point(int x = 60, int y = 80)
    {
        this->x = x;
        this->y = y;
    }
    void set_Point(int i, int j)
    {
        this->x = x+ i;
        this->y = y+ j;
    }
    void display()
    {
        cout << "PointµÄ×ø±êÎª(" << x << "," << y << ")" << endl;
    }
};
int main()
{
    Point p1;
    Point p2(10, 20);
    p1.set_Point(40, 20);
    p2.set_Point(40, 30);
    p1.display();
    p2.display();

    return 0;
}