#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    int n;
    cin>>n;
    int w[50], h[50];
    for(int i=0; i<n; i++){
        cin>>w[i]>>h[i];
    }
    for(int i=0;i<n;i++){
        int rank=1;
        for(int j=0;j<n;j++){
            if(w[i] < w[j] && h[i] < h[j])
                rank++;
        }
        cout<<rank<<" ";
    }
    
}