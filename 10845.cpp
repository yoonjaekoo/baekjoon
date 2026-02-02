#include <queue>
#include <iostream>
#include <string>
using namespace std;
int main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    queue<int> q;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        int temp;
        if(s == "push"){
            cin>>temp;
            q.push(temp);
        }
        if(s == "pop"){
            if(q.empty()) cout<<"-1\n";
            else{
                cout<<q.front()<<"\n";
                q.pop();
            }
        }
        if(s == "size"){
            cout<<q.size()<<"\n";
        }
        if(s == "empty"){
            if(q.empty()) cout<<"1\n";
            else cout<<"0\n";
        }
        if(s == "front"){
            if(q.empty()) cout<<"-1\n";
            else cout<<q.front()<<"\n";
        }
        if(s == "back"){
            if(q.empty()) cout<<"-1\n";
            else cout<<q.back()<<"\n";
        }
    }

}