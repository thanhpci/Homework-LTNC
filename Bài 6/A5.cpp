#include <iostream>
using namespace std;

long F(int n) {
   if (n == 0) return 0;
   if (n == 1) return 1;
   return F(n-1) + F(n-2);
}


int main(){
    int n;
    cin >> n;
    cout << F(n) << ' ';
    int f0 = 0, f1 = 1, f;
    for (int i = 2; i <= n; i++){
        f = f0 + f1;
        f0 = f1;
        f1 = f;
    }
    cout << f;
    return 0;
}
