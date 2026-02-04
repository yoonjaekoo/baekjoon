#include <iostream>
#include <algorithm>
using namespace std;
int talmo=0;
int gcd(int a, int b) {
	while (b) {
		int r = a % b;
		a = b;
		b = r;
	}
	return a;
}
int main(){
    int n;
    cin>>n;
    if(n==1){
        cout<<1;
        return 0;
    }
    for(int i=1;i<n;i++){
        if(gcd(n,i) == 1)talmo++;
    }
    cout<<talmo;
}