#include <iostream>

using namespace std;

struct point{
    int x, y;

    point(int _x, int _y) { x=_x; y =_y;};
    point () {};

    void print ()
    {
        cout << "(" << x << "," << y << ")" << endl;
    }
    point mid_point ( point other) const
    {
        point mid;
        mid.x = (x + other.x)*1/2;
        mid.y = (y + other.y)*1/2;
        return mid;
    }

};

int main()
{
    point x(1,2);
    point y(3,4);

    x.print();
    y.print();

    point mid = x.mid_point(y);
    mid.print();

    return 0;
}
