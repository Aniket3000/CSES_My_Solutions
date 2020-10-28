#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
    int n;
    cin>>n;
    int sum = (n*(n+1)/2);
    if(sum&1){
        cout<<"NO";
    }else{
        sum /= 2;
        vector<int> firstset;
        vector<int> secondset;
        int x=-1;
        int temp = 0,i=n,inde=-1;
        while(temp < sum){
            temp += i;
            if(temp < sum){
                secondset.push_back(i--);
            }else if(temp > sum){
                temp -= i;
                x = i;
                inde = sum - temp;
                secondset.push_back(sum - temp);
                temp = sum;
            }else{
                secondset.push_back(i);
                x = i-1;
                break;
            }
        }
        sort(secondset.begin(),secondset.end());
        for(int i=1;i<=x;i++){
            if(i!=inde){
                firstset.push_back(i);
            }
        }
        cout<<"YES\n";
        cout<<firstset.size()<<"\n";
        for(auto i:firstset)
            cout<<i<<" ";
        cout<<"\n";
        cout<<secondset.size()<<"\n";
        for(auto i: secondset)
            cout<<i<<" ";
        cout<<"\n";
    }
}