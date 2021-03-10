#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    bool chck = false;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        for (int j = 0; j < i; j++)
        {
            if (a[j] == a[i]) chck = true;
        }
    }
    if (chck) cout << "Yes";
    else cout << "No";
    return 0;
}
