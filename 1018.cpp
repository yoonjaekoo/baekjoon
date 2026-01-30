#include <iostream>
#include <string>
using namespace std;

int n,m;
string board[50];

int check(int x,int y){
    int wStart=0,bStart=0;
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if((i+j)%2==0){
                if(board[x+i][y+j]!='W') wStart++;
                if(board[x+i][y+j]!='B') bStart++;
            }else{
                if(board[x+i][y+j]!='B') wStart++;
                if(board[x+i][y+j]!='W') bStart++;
            }
        }
    }
    return wStart<bStart?wStart:bStart;
}

int main(){
    cin>>n>>m;
    for(int i=0;i<n;i++) cin>>board[i];

    int ans=64;
    for(int i=0;i<=n-8;i++){
        for(int j=0;j<=m-8;j++){
            int v=check(i,j);
            if(v<ans) ans=v;
        }
    }
    cout<<ans;
}
