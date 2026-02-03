#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    
    int n;
    while (cin >> n) {
        int cnt = 0, num = 0;
        while (true) {
            num = (num * 10LL + 1) % n;
            cnt++;
            if (num == 0) {
                cout << cnt << '\n';
                break;
            }
        }
    }
}
