#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int n;
    cin>>n;
    vector<long long int> fibonaccibismurihansuyeol(n+1);
    fibonaccibismurihansuyeol[0]=1;
    fibonaccibismurihansuyeol[1]=1;
    fibonaccibismurihansuyeol[2]=1;

    for(int i=3;i<n;i++){
        fibonaccibismurihansuyeol[i]=fibonaccibismurihansuyeol[i-1]+fibonaccibismurihansuyeol[i-3];
    }
    cout<<fibonaccibismurihansuyeol[n-1];
}