#include <iostream>
#include <cmath>
using namespace std;

bool checkPrime (int n);

int main()
{
    int n;
    cin >> n;
    if (checkPrime(n)) cout << "Yes";
    else cout << "No";
    return 0;
}

bool checkPrime (int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0) return true;
    }
    return false;
}
