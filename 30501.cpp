#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        for(int j=0;j<s.length();j++){
            if(s[j] == 's' || s[j] == 'S'){
                cout<<s;
                return 0;
            }
        }
    }
}