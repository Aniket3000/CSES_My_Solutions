#include <bits/stdc++.h>
using namespace std;
long long int fact(int n);

long long int nCr(int n, int r)
{
    return fact(n) / (fact(r) * fact(n - r));
}

// Returns factorial of n
long long int fact(int n)
{
    int res = 1;
    for (int i = 2; i <= n; i++)
        res = res * i;
    return res;
}
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        /*if (i == 1)
            cout << 0 << "\n";
        else if (i == 2)
            cout << 6 << "\n";
        else
        {
            long long int p = i*i;
            long long int j = i-2,k=p*(p-1)/2;
            k -=4*j*(j+1);
            cout<<k<<"\n";
        }*/
        
        int s=i*i;
        int t=(s*(s-1))/2;
        cout<<t-(4*(i-1)*(i-2))<<"\n";
        
        // i simply made the formula without any exceptional cases
    }
}
