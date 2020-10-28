#include <bits/stdc++.h>
using namespace std;
#define int long long
bool cmp(pair<char, int> &a,
         pair<char, int> &b)
{
    return a.second < b.second;
}

// Function to sort the map according
// to value in a (key-value) pairs
void sort(unordered_map<char, int> &M)
{

    // Declare vector of pairs
    vector<pair<char, int>> A;

    // Copy key-value pair from Map
    // to vector of pairs
    for (auto &it : M)
    {
        A.push_back(it);
    }

    // Sort using comparator function
    sort(A.begin(), A.end(), cmp);

    // Print the sorted value
}
int32_t main()
{
    string n;
    cin >> n;
    unordered_map<char, int> mp;
    if(n.size()==1){
        cout<<n;
        return 0;
    }
    if (n.size() & 1)
    {
        // If its odd
        for (auto i : n)
        {
            mp[i]++;
        }
        int odd = 0, even = 0;
        for (auto i : mp)
        {
            if (i.second & 1)
            {
                odd++;
            }
            else
            {
                even++;
            }
        }
        if (odd > 1 || odd == 1 && n.size()%2==0)
        {
            cout << "NO SOLUTION";
        }
        else
        {
            sort(mp);
            int cnt = 0;
            int occ;
            char a;
            vector<char> ar;
            for (auto i : mp)
            {
                cnt++;
                if (cnt == 1)
                {
                    a = i.first;
                    occ = i.second;
                    continue;
                }
                // if (cnt == mp.size() / 2)
                //     break;
                int nu = i.second / 2;
                while (nu--)
                {
                    cout << i.first;
                    ar.push_back(i.first);
                }
            }
            while(occ--){
                cout<<a;
            }
            reverse(ar.begin(), ar.end());
            for (auto i : ar)
                cout << i;
        }
    }
    else
    {
        for (auto i : n)
            mp[i]++;
        for (auto i : mp)
        {
            if (i.second & 1)
            {
                cout << "NO SOLUTION";
                return 0;
            }
        }
        sort(mp);
        int cnt = 0;
        vector<char> ar;
        // cout << "ew";
        for (auto i : mp)
        {
            cnt++;
            // if (cnt == mp.size() / 2)
            //     break;
            int nu = i.second / 2;
            while (nu--)
            {
                cout << i.first;
                ar.push_back(i.first);
            }
        }
        reverse(ar.begin(), ar.end());
        for (auto i : ar)
            cout << i;
    }
}