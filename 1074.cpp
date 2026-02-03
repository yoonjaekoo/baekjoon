#include <bits/stdc++.h>
using namespace std;

int n, r, c;
long long cnt = 0;

void z(int x, int y, int size) {
    if (size == 1) return;
    
    int half = size / 2;
    if (r < x + half && c < y + half) {
        // 1사분면
        z(x, y, half);
    } else if (r < x + half && c >= y + half) {
        // 2사분면
        cnt += (long long)pow(4, n - 1);
        z(x, y + half, half);
    } else if (r >= x + half && c < y + half) {
        // 3사분면
        cnt += (long long)pow(4, n - 1) * 2;
        z(x + half, y, half);
    } else {
        // 4사분면
        cnt += (long long)pow(4, n - 1) * 3;
        z(x + half, y + half, half);
    }
    n--;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    
    cin >> n >> r >> c;
    z(0, 0, 1 << n);
    cout << cnt;
}
