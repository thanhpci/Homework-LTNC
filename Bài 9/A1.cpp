#include <iostream>
#include <cstring>

using namespace std;

char *concat(const char a [], const char b[] )
{
    char *str = new char [strlen(a) + strlen(b)];
    strcpy(str, a);
    strcat(str, b);
    return str;

}

int main()
{
    const char a[] = "Hello";
    const char b[] = "World";
    cout << concat ( a, b );
    return 0;
}
