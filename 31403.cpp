#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string sa, sb, sc;
    cin >> sa >> sb >> sc;

    long long a = stoll(sa);
    long long b = stoll(sb);
    long long c = stoll(sc);

    cout << (a + b - c) << "\n";
    cout << (stoll(sa + sb) - c) << "\n";
}
