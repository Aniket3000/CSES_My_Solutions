#include<bits/stdc++.h>
using namespace std;
#define int long long
const int mod = 1000000007;
int binarySearch(vector<int> arr, int l, int r, int x)
{
    if (r >= l)
    {
        int mid = l + (r - l) / 2;
        if (arr[mid] == x)
            return mid;
        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);
        return binarySearch(arr, mid + 1, r, x);
    }
    return -1;
}
int32_t main(){
    int n,x,pos;
    cin>>n>>x>>pos;
    vector<int> permutations;int a;
    for(int i=0;i<n;i++){
        permutations.push_back(i+1);
    }
    sort(permutations.begin(),permutations.end());
    int count = 0;
    do{
        // process permutations
        int result = binarySearch(permutations,0,n,x);
        if(pos == result){
            count = count%mod+1;
        }
    }while(next_permutation(permutations.begin(),permutations.end()));
    cout<<count%mod;
}