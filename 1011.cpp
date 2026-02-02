#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        long long x, y;
        cin >> x >> y;
        long long d = y - x;          
        long long n = sqrt((long double)d); 

        long long ans;
        if (d == n * n) {             
            ans = 2 * n - 1;
        } else if (d <= n * n + n) {  
            ans = 2 * n;
        } else {                      
            ans = 2 * n + 1;
        }
        cout << ans << '\n';
    }
    return 0;
}
