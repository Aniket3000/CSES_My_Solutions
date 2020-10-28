#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int a, b;
        cin >> a >> b;
        if(a<b){
            swap(a,b);
        }
        if(a>2*b){
            cout<<"NO\n";
            continue;
        }
        if((a+b)%3==0){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
}