#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>> n;
    int mat[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>> mat[i][j];
        }
    }

    for(int i=0; i<n; i++){
        for(int j=n-1; j>=0; j--){
            cout<< mat[j][i]<<" ";
        }
        cout<<"\n";
    }


    return 0;
}