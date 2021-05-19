#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>> n;

    int mat[n][n];

    for(int i=0; i<n; i++){
        for(int j=0;j<n; j++){
            mat[i][j]= i+j;
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0;j<n; j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<"\n";
    }
    for(int i=0; i<n; i++){
        for(int j=0;j<n; j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<"\n";
    }



    return 0;
}