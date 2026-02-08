#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,k;
    cin>>n>>k;
    vector<int> w(n), v(n);
    for(int i=0;i<n;i++) cin>>w[i]>>v[i];

    vector<int> dp(k+1,0);

    for(int i=0;i<n;i++){
        for(int j=k;j>=w[i];j--){
            dp[j]=max(dp[j],dp[j-w[i]]+v[i]);
        }
    }

    cout<<dp[k];
}
