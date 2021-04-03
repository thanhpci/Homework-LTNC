#include <iostream>

using namespace std;

struct point{
    int x, y;

    point(int _x, int _y) { x=_x; y =_y;};
};

void print1 ( point x)
{
    cout << &x;
}

void print2 ( point &x)
{
    cout << &x;
}

int main()
{
    point x(7,8);

    cout << &x << endl;
    print1 (x);

    cout << endl;
    print2 (x);

    return 0;
}
