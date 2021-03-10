#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int waitTime[n], thutu[n];
    for (int i = 0; i < n; i++)
    {
        cin >> waitTime[i];
        thutu[i] = i + 1;
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (waitTime[i] < waitTime[j])
            {
                swap(waitTime[i], waitTime[j]);
                swap(thutu[i], thutu[j]);
            }
        }
    }
    long long totalTime = 0;
    for (int i = 0; i < n; i++)
    {
        totalTime += i * waitTime[i];
    }
    cout << totalTime << endl;
    for (int i = 0; i < n; i++) cout << thutu[i] << ' ';
    return 0;
}
