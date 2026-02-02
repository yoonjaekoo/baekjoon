#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n;
    vector<int> A(n);
    for(int i=0;i<n;i++) cin>>A[i];

    cin>>m;
    for(int i=0;i<m;i++){
        int temp;
        cin>>temp;
        bool found=false;

        for(int j=0;j<n;j++){
            if(temp==A[j]){
                found=true;
                break;
            }
        }

        if(found) cout<<"1\n";
        else cout<<"0\n";
    }
}
