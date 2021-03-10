#include <iostream>
using namespace std;


int main() {
    int w, h;
    cin >> w >> h;
    bool checkRow[w];
    bool nextCheckRow[w];
    char thisRow[w];
    char lastRow[w];
    char grid;
    bool escape = false;
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            cin >> grid;
            thisRow[j] = grid;
            if (i == 0)
            {
                if (grid == 'Y') checkRow[j] = true;
                else checkRow[j] = false;
            }
            else
            {
                if (grid == 'R' || lastRow[j] == 'R') nextCheckRow[j] = false;
                else
                {
                    int chk1 = j - 1, chk2 = j + 1;
                    if (chk1 < 0) chk1++;
                    if (chk2 > w - 1) chk2--;
                    if (checkRow[chk1] || checkRow[j] || checkRow[chk2]) nextCheckRow[j] = true;
                    else nextCheckRow[j] = false;
                }
            }
        }
        if (i != 0)
        {
            for (int j = 0; j < w; j++)
            {
                checkRow[j] = nextCheckRow[j];
            }
        }
        if (i != w - 1)
        {
            for (int j = 0; j < w; j++)
            {
                lastRow[j] = thisRow[j];
            }
        }
    }
    for (int j = 0; j < w; j++)
    {
        if (checkRow[j]) escape = true;
    }
    if (escape) cout << "YES";
    else cout << "NO";
    return 0;
}
