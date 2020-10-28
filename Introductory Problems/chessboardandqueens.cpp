#include<bits/stdc++.h>
using namespace std;
#define int long long
int ways;
bool reserved[8][8],col[16],diag1[16],diag2[16];

void search(int r){
    if(r == 8){
        ways++;
        return;
    }
    for(int c = 0;c<8;c++){
        if(col[c] || diag1[r+c] || diag2[r-c+7] || reserved[r][c])
            continue;
        col[c] = diag1[r+c] = diag2[r-c+7] = true;
        search(r+1);
        col[c] = diag1[r+c] = diag2[r-c+7] = false;
    }
}

int32_t main(){
    string x;
    for(int i=0;i<8;i++)
        for(int j=0;j<8;j++)
            reserved[i][j] = false;
    for(int i=0;i<8;i++){
        col[i] = diag1[i] = diag2[i] = false;
    }
    for(int i=0;i<8;i++){
        cin>>x;
        for(int k=0;k<8;k++){
            if(x[k] == '*') reserved[i][k] = true;
        }
    }
    search(0);
    cout<<ways;
}