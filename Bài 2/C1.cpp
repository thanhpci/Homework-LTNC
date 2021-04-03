#include <iostream>

using namespace std;

bool prime(int n) {
    if (n < 2) return false;
    for (int i = 2; i < n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}
int main()
{
    int n;
    cin >> n;
    if(prime(n)) cout << "true";
    else cout << "false";


    return 0;
}
