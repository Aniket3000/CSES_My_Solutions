#include <bits/stdc++.h>
using namespace std;
#define lli long long int
const lli mod = 1e9 + 7;
lli power(lli x, lli y)
{
    if (y == 0)
        return 1;
    else if (y == 1)
        return x;
    else
    {
        if (y % 2 == 0)
            return (power(x, y / 2) % mod * power(x, y / 2) % mod) % mod;
        else
        {
            return (power(x, y / 2) % mod * power(x, y / 2) % mod * x)%mod;
        }
    }
}
int main()
{
    long long int n;
    cin >> n;
    cout << power(2, n);
}