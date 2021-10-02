// O(n ^ 3) => O(n ^ 2)

#include<bits/stdc++.h>
using namespace std;

bool tripletSum(int arr[],int n,int sum){
    sort(arr,arr+n);
    for(int i=0;i<n-2;i++){
        int j=i+1;
        int k=n-1;
        while(j<k){
            if(arr[i]+arr[j]+arr[k]==sum){
                cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k];
                return true;
            }
            else if(arr[i]+arr[j]+arr[k]<sum){
                j++;
            }
            else{
                k--;
            }
        }
    }
    return false;
}

int main(){
    int a,sum;
    cin>>a>>sum;
    int arr[a];
    for(int i=0;i<a;i++){
        cin>>arr[i];
    }
    tripletSum(arr,a,sum);
}