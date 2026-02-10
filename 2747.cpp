#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    int n;
    cin >> n;

    if(n == 0){
        cout << 0;
        return 0;
    }
    if(n == 1){
        cout << 1;
        return 0;
    }

    vector<long long> fibo(n+1);
    fibo[0] = 0;
    fibo[1] = 1;

    for(int i = 2; i <= n; i++){
        fibo[i] = fibo[i-1] + fibo[i-2];
    }

    cout << fibo[n];
}
