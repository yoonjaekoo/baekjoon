#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    int n,m;
    cin>>n>>m;
    unordered_set<string> dedbo;
    string s;
    for(int i=0;i<n;i++){
        cin>>s;
        dedbo.insert(s);
    }

    vector<string> ans;
    for(int i=0;i<m;i++){
        cin>>s;
        if(dedbo.count(s)) ans.push_back(s);
    }

    sort(ans.begin(), ans.end());
    cout<<ans.size()<<"\n";
    for(auto &name : ans) cout<<name<<"\n";
}
