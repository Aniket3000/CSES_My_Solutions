#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<long long int> arr(n, 0);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr.begin(), arr.end());
    long long int b = accumulate(arr.begin(), arr.end(), 0) / 2;
    // cout<<b;
    long long int temp = 0, one = 0;
    int j,flag=1;
    for (int i = n - 1; i >= 0; i--)
    {
        temp += arr[i];
        if (temp == b)
        {
            cout << 0;
            return 0;
        }
        if (temp > b && i != n - 1)
        {
            temp -= arr[i];
            j = i;
            break;
        }
        else if (temp > b && i == n - 1)
        {
            flag = 0;
            j = i - 1;
            break;
        }
    }
    int k = -1;
    if (flag == 1)
    {
        for (int i = 0; i <= j; i++)
        {
            if (temp + arr[i] == b)
            {
                temp += arr[i];
                break;
            }
            if (temp + arr[i] > b)
            {
                k = i;
                break;
            }
            temp += arr[i];
        }
    }
    for (int i = 0; i <= j; i++)
    {
        if (k != i)
        {
            one += arr[i];
        }
    }
    cout<<temp<<" "<<one<<" ";
    cout << abs(temp - one);
}