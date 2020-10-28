#include <bits/stdc++.h>
using namespace std;
#define int long long

string s;
int ways = 0, steps = 0;
bool v[7][7];
int reserved[49];

void solve(int r, int c)
{
    if (r == 6 && c == 0)
    {
        if (steps == 48)
        {
            ways++;
        }
        return;
    }
    bool t = v[r][c] || (c > 0 && c < 6 && !v[r][c + 1] && !v[r][c - 1] && ((r == 0 && v[r + 1][c]) || (r == 6 && v[r - 1][c])) || (r > 0 && r < 6 && !v[r + 1][c] && !v[r - 1][c] && ((c == 0 && v[r][c + 1]) || (c == 6 && v[r][c - 1])))) || (r > 0 && r < 6 && c > 0 && c < 6 && v[r - 1][c] && v[r + 1][c] && !v[r][c - 1] && !v[r][c + 1]) || (r > 0 && r < 6 && c > 0 && c < 6 && v[r][c - 1] && v[r][c + 1] && !v[r - 1][c] && !v[r + 1][c]);

    if (t)
        return;
    v[r][c] = true;
    if (reserved[steps] != -1)
    {
        switch (reserved[steps])
        {
        case 0:
            /* code */

            if (r > 0 && !v[r - 1][c])
            {
                steps++;
                solve(r - 1, c);
                steps--;
            }
            break;
        case 2:
            if (r < 6 && !v[r + 1][c])
            {
                steps++;
                solve(r + 1, c);
                steps--;
            }
            break;
        case 3:
            if (c > 0 && !v[r][c - 1])
            {
                steps++;
                solve(r, c - 1);
                steps--;
            }
            break;
        case 1:
            if (c < 6 && !v[r][c + 1])
            {
                steps++;
                solve(r, c + 1);
                steps--;
            }
            break;
        }
        v[r][c] = false;
        return;
    }
    if (r > 0 && !v[r - 1][c])
    {
        steps++;
        solve(r - 1, c);
        steps--;
    }
    if (r < 6 && !v[r + 1][c])
    {
        steps++;
        solve(r + 1, c);
        steps--;
    }
    if (c > 0 && !v[r][c - 1])
    {
        steps++;
        solve(r, c - 1);
        steps--;
    }
    if (c < 6 && !v[r][c + 1])
    {
        steps++;
        solve(r, c + 1);
        steps--;
    }
    v[r][c] = false;
}
int32_t main()
{
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '?')
            reserved[i] = -1;
        else if (s[i] == 'U')
            reserved[i] = 0;
        else if (s[i] == 'R')
            reserved[i] = 1;
        else if (s[i] == 'D')
            reserved[i] = 2;
        else if (s[i] == 'L')
            reserved[i] = 3;
    }
    solve(0, 0);
    cout << ways;
    return 0;
}