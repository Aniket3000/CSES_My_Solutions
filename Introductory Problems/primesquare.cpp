#include<bits/stdc++.h>
using namespace std;
#define int long long
int m = 101; //example
vector<int> seive(m + 1, 0);
int32_t main(){
    int t;
    cin>>t;
    for (int x = 2; x <= m; x++)
    {
        if (seive[x])
            continue;
        for (int u = 2 * x; u <= m; u += x)
        {
            seive[u] = 1;
        }
    }
    while(t--){
        int n;
        cin>>n;
        if(!seive[n]){
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    cout<<1<<" ";
                }
                cout<<"\n";
            }
        }else{
            if(n&1){
                for (int i = 0; i < n; i++)
                {
                    for (int j = 0; j < n; j++)
                    {
                        if((i+1 == n/2 && j+1 == (n+1)/2) || (i+1 == (n+1)/2 && j+1 ==(n+1)/2 + 1)){
                            cout<<1<<" ";
                            continue;
                        }
                        if (i == j)
                        {
                            cout << 1 << " ";
                            continue;
                        }
                        if (i + j == n - 1)
                        {
                            cout << 1 << " ";
                            continue;
                        }
                        cout << 0 << " ";
                    }
                    cout << "\n";
                }
            }else{
                for(int i=0;i<n;i++){
                    for(int j=0;j<n;j++){
                        if(i == j){
                            cout<<1<<" ";
                            continue;
                        }
                        if(i+j == n-1){
                            cout<<1<<" ";
                            continue;
                        }
                        cout<<0<<" ";
                    }
                    cout<<"\n";
                }
            }         
        }
    }
}