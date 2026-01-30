#include <iostream>
#include <vector>
#include <algorithm>

void solve() {
    int n;
    std::cin >> n;
    std::vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }
    int s;
    std::cin >> s;

    for (int i = 0; i < n && s > 0; ++i) {
        int max_val = arr[i];
        int max_idx = i;
        for (int j = i + 1; j < n && j <= i + s; ++j) {
            if (arr[j] > max_val) {
                max_val = arr[j];
                max_idx = j;
            }
        }

        if (max_idx != i) {
            for (int k = max_idx; k > i; --k) {
                std::swap(arr[k], arr[k - 1]);
            }
            s -= (max_idx - i);
        }
    }

    for (int i = 0; i < n; ++i) {
        std::cout << arr[i] << (i == n - 1 ? "" : " ");
    }
    std::cout << std::endl;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    solve();
    return 0;
}
