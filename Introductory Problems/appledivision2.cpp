#include <bits/stdc++.h>
using namespace std;
#define int long long
int min_diff = INT_MAX;
vector<int> subset;
void allSubset(int S[], int n, int m)
{
    int subset_size = pow(2, n);
    int index, i;
    for (index = 0; index < subset_size; index++)
    {
        int c = 0;
        for (i = 0; i < n; i++)
        {
            if (index & (1 << i))
            {
                c += S[i];
            }
        }
        // for (int j = 0; j < subset.size(); ++j)
        //     cout << subset[j] << " ";
        // cout << "\n";
        min_diff = min(min_diff, abs(m - c - c));
    }
}
int32_t main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr,arr+n);
    int b = 0;
    for(int i=0;i<n;i++){
        b += arr[i];
    }
    allSubset(arr, n, b);
    cout << min_diff;
}