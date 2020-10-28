#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t;
    cin>>t;
    long long int x, y;
    while(t--){
        cin>>x>>y;
        if(x > y){
            vector<long long int> series(x+1,0);
            series[1] = 1;
            series[2] = 3;
            for(int i=3;i<=x;i++){
                series[i] = series[i-1] + 2*(i-1);
            }
            if(x&1){
                cout << series[x] - (x - y) << "\n";
            }else{
                cout << series[x] + (x - y) << "\n";
                
            }
        }else if(x < y){
            vector<long long int> series(y+1,0);
            series[1] = 1;
            series[2] = 3;
            for(int i=3;i<=y;i++){
                series[i] = series[i-1] + 2*(i-1);
            }
            if(y&1){
                cout << series[y] + (y - x) << "\n";
            }else{
                cout<<series[y] - (y-x)<<"\n";
            }
        }else{
            vector<long long int> series(y+1,0);
            series[1] = 1;
            series[2] = 3;
            for (int i = 3; i <= y; i++)
            {
                series[i] = series[i - 1] + 2 * (i - 1);
            }
            cout<<series[y]<<"\n";
        }
    }
    return 0;
}