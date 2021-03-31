#include <iostream>
using namespace std;
int main()
{
    int a =10;

    int *aPtr = new int;
    aPtr = &a;

    delete aPtr;

    cout << &a << endl;
    cout << aPtr;

    return 0;

}
