#include <iostream>

using namespace std;

int main() {
    char *s;

    char foo[] = "Hello World";
    s = foo;

    cout << "s la " << s << endl;

    s = &foo[0];

    cout << "s[0] la " << *s << endl;

    return 0;
}
