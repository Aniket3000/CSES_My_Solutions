#include <bits/stdc++.h>
using namespace std;
const int MAX_CHAR = 26;

int factorial(int n)
{
    int fact = 1;
    for (int i = 2; i <= n; i++)
        fact = fact * i;
    return fact;
}

int noofoccurences(string str)
{
    int length = str.length();

    int freq[MAX_CHAR];
    memset(freq, 0, sizeof(freq));
    for (int i = 0; i < length; i++)
        if (str[i] >= 'a')
            freq[str[i] - 'a']++;
    int fact = 1;
    for (int i = 0; i < MAX_CHAR; i++)
        fact = fact * factorial(freq[i]);

    return factorial(length) / fact;
}
int main()
{
    string n;
    cin >> n;
    vector<char> permutation;
    for (auto i : n)
    {
        permutation.push_back(i);
    }
    sort(permutation.begin(),permutation.end());
    cout<<noofoccurences(n)<<"\n";
    // int count = 0;
    do
    {
        // count++;
        for (auto i : permutation)
            cout << i;
        cout << "\n";
    } while (next_permutation(permutation.begin(), permutation.end()));
    // cout<<count;
}