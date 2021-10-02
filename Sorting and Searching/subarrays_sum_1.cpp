//Author:- 100duodecillion
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define pi 3.141592
typedef vector<int> vec;
int32_t main(){
    ios_base::sync_with_stdio(0),cin.tie(0);
    int a,b;
    cin>>a>>b;
    int arr[a];
    for(int i=0;i<a;i++){
        cin>>arr[i];
    }
    int i=0,j=0;
    int sum=0;
    int cnt=0;
    while(i<a || j<a){
        if(sum<b){
            sum+=arr[j++];
        }
        else if(sum==b){
            cnt++;
            sum+=arr[j++];
            sum-=arr[i++];
        }
        else{
            sum-=arr[i++];
        }
        //cout<<sum<<" ";
    }
    cout<<cnt;
    return 0;
}