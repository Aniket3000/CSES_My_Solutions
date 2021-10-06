/*#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
    int n;
    cin>>n;
    int arr[n];
    set<int> s;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=0;i<n;i++){
        s.insert(arr[i]);
    }
    cout<<s.size();

}*/

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
    int a;
    cin>>a;
    int arr[a];
    set<int>s;
    for(int i=0;i<a;i++){
        cin>>arr[i];
        s.insert(arr[i]);
    }
    cout<<s.size();
    return 0;
}

// these changes may help
