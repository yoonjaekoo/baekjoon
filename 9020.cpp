#include <bits/stdc++.h>
using namespace std;

const int MAXN = 10000;
bool is_prime[MAXN+1];

void sieve() {
    memset(is_prime, true, sizeof(is_prime));
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i <= MAXN; i++) {
        if (is_prime[i]) {
            for (int j = i*i; j <= MAXN; j += i) {
                is_prime[j] = false;
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    
    sieve();
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        for (int i = n/2; i >= 2; i--) {
            if (is_prime[i] && is_prime[n-i]) {
                cout << i << " " << (n-i) << "\n";
                break;
            }
        }
    }
    return 0;
}
