#include<bits/stdc++.h>
using namespace std;
int main(){
    string a;
    cin>>a;
    vector<int> counts;
    counts.push_back(1);
    int ans = 1;
    for(int i=0;i<a.size()-1;i++){
        if(a[i] == a[i+1]){
            counts.push_back(++ans);
        }else{
            ans = 1;
        }
    }
    sort(counts.begin(),counts.end());
    cout<<counts[counts.size()-1];
}