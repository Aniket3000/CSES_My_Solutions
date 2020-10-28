#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        if(accumulate(arr,arr+n,0) == m)
            cout<<"YES\n";
        else
        {
            cout<<"NO\n";
        }
        
    }
}