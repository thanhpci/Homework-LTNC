#include <iostream>
using namespace std;


void swap_pointers(char* &x, char* &y)
{
    char *tmp;
    tmp = x;
    x = y;
    y = tmp;
}
int main()
{
    char a[] = "abc";
    char b[] = "abcde";
    char *s1 = a;
    char *s2 = b;
    swap_pointers(s1,s2);
    cout << "s1 la " << s1 << endl;
    cout << "s2 la " << s2 << endl;
    return 0;
}

