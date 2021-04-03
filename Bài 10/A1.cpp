#include <iostream>
using namespace std;

struct point{
    int x, y;

    point(int _x, int _y) { x=_x; y =_y;};

    void print ()
    {
        cout << "(" << x << "," << y << ")";
    }

};

int main()
{
    point x(5,9);
    x.print();
    return 0;
}
