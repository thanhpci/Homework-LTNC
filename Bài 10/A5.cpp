#include <iostream>

using namespace std;

struct point {
    int x, y;

    point (){};

    point (int _x, int _y) { x = _x; y = _y;};

    void print ()
    {
        cout << "(" << x << "," << y << ")";
    }

};

int main()
{
    point x(1,2);
    point y = x;

    y.print();
    return 0;
}
