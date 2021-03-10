#include <iostream>
using namespace std;
int main()
{
    string sau;
    cin >> sau;
    bool checkPalindrome = true;
    for (int i = 0; i < sau.length() / 2; i++)
    {
        if (sau[i] != sau [sau.length() - 1 - i])
        {
            checkPalindrome = false;
            break;
        }
    }
    if (checkPalindrome) cout << "Xau doi xung";
    else cout << "Xau ko doi xung";
    return 0;
}
