#include <bits/stdc++.h>
using namespace std;

int swaap = 0;

void bubbleSort(vector<int>& v) {
    int n = v.size();
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {  
            if (v[j] > v[j + 1]) {
                swap(v[j], v[j + 1]);  
                swaap++;
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) cin >> v[i];

    bubbleSort(v);
    cout << swaap << '\n';
    return 0;
}
