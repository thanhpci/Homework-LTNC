#include <iostream>

using namespace std;

struct point{
    int x, y;

    point(int _x, int _y) { x=_x; y =_y;};

    void print ()
    {
        cout << &x << '\t' << &y << endl;

    }

};

int main()
{
    point x(1,1);

    cout << &x << endl;

    x.print();
    return 0;
}
 //trường x có địa chỉ giống với địa chỉ biến x
 //trường y có địa chỉ sau trường x 4 ô nhớ
