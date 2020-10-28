#include<bits/stdc++.h>
using namespace std;
#define lli long long int
const lli mod = 1e9+7;
lli power(lli x,lli y, lli p){
    lli res = 1;
    // x%=p;
    while(y){
        if(y&1){
            res = (res * x) % p;
        }
        y >>= 1;
        x = (x*x) % p;
    }
    return res;
}
int main(){
    long long int n;
    cin>>n;
    cout<<power(2,n,mod);
}