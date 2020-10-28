//Author:- algokiller**
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(x) x.begin(), x.end()
#define set(x) memset(x, 0, sizeof(x))
#define iter(it, a) for (auto it = a.begin(); it != a.end(); it++)
#define PI 3.1415926535897932384626
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pii> vpii;

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n-1;i++){
        cin>>arr[i];
    }
    int a=0;
    for(int i=1;i<=n;i++)
        a ^= i;
    for(int i=0;i<n-1;i++){
        a ^= arr[i];
    }
    cout<<a;
    return 0;
}