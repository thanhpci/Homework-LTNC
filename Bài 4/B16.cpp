#include <iostream>
using namespace std;


int main() {
    int n, m;
    cin >> n >> m;
    string s;
    cin >> s;
    for (int i = 0; i < m; i++)
    {
        int tmpi, tmpj;
        cin >> tmpi >> tmpj;
        int conut = 1;
        tmpi--;
        int len = tmpj - tmpi;
        for (int j = tmpi + len; j < n; j += len)
        {
            bool chk = true;
            for (int k = 0; k < len; k++)
            {
                if (s[j + k] != s[tmpi + k])
                {
                    chk = false;
                    k = len;
                }
            }
            if (chk) conut++;
            else j = n;
        }
        cout << conut << endl;
    }
    return 0;
}
