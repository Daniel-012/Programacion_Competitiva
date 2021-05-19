#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    int m;
    char x;
    cin>> n>> m;
    bool mat[n][m]= {};

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>> x;
            if(x=='1'){
                mat[i][j]= true;;
            }
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(mat[i-1][j-1]== true && mat[i][j-1]== true && mat[i-1][j]== true && i>=0 && j>=0 && i<n && j<m ){
                mat[i][j]= true;
            }

            if(mat[i-1][j+1]== true && mat[i][j+1]== true && mat[i-1][j]== true && i>=0 && j>=0 && i<n && j<m){
                mat[i][j]= true;
            }

            if(mat[i+1][j-1]== true && mat[i][j-1]== true && mat[i+1][j]== true&& i>=0 && j>=0 && i<n && j<m){
                mat[i][j]= true;
            }

            if(mat[i+1][j+1]== true && mat[i][j+1]== true && mat[i+1][j]== true && i>=0 && j>=0 && i<n && j<m){
                mat[i][j]= true;
            }
        }
    }
    cout<<"\n";

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(mat[i][j]== true){
                cout<<1;
            }else{
                cout<<0;
            }
        }
        cout<<"\n";
     }


    return 0;
}