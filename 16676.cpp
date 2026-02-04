#include <iostream>
using namespace std;

int main(){
    long long n;
    cin>>n;
    long long num=0;
    int cnt=0;
    while(true){
        num = num*10 + 1;
        if(num>n) break;
        cnt++;
    }
    cout<<cnt;
}