#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    
    int N;
    string S;
    cin >> N >> S;
    
    string adrian = "ABC", bruno = "BABC", goran = "CCAABB";
    int A = 0, B = 0, G = 0;
    
    for (int i = 0; i < N; i++) {
        if (S[i] == adrian[i % 3]) A++;
        if (S[i] == bruno[i % 4]) B++;
        if (S[i] == goran[i % 6]) G++;
    }
    
    int mx = max({A, B, G});
    cout << mx << '\n';
    
    if (A == mx) cout << "Adrian\n";
    if (B == mx) cout << "Bruno\n";
    if (G == mx) cout << "Goran\n";
    
    return 0;
}
