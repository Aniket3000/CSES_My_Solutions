#include <bits/stdc++.h>
using namespace std;
struct Factors
{
    long long int fives;
    long long int twos;
};
int main()
{
    long long int n;
    cin >> n;
    if (n < 5)
    {
        cout << 0;
        return 0;
    }
    if (n == 5)
    {
        cout << 1;
        return 0;
    }
    struct Factors factors
    {
        0, 0
    };
    for(long long int i=5;n/i >= 1;i*=5){
        factors.fives+=n/i;
    }
    cout<<factors.fives;
}