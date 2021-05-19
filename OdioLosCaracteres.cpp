#include<bits/stdc++.h>

using namespace std;

long long int mat[1000][1000]={};

bool bfs(int ini, int fin, int& i,long int& objetivo){
    int mitad;
    while(ini<fin){
        mitad= ini+(fin-ini+1)/2;
        //cout<<mitad<<" ";
        if(mat[i][mitad]<= objetivo){
            if( mat[i][mitad]== objetivo){
                return true;
            }else{
                 ini= mitad;
            }
        }else{
            fin= mitad-1;
           
        }
    }

    if(mat[i][fin]== objetivo){
        return true;
    }else{
        return false;
    }
    
}



bool esta (long int& x, int& n){
    for(int i=0; i<n; i++){
        if(bfs(0, n,i, x)){
            return true;
        }
    }
    return false;
}



int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    long int x;

    cin>> n;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>> mat[i][j];
        }
    }
    cin>> m;
    for(int i=0; i<m; i++){
        cin>> x;
        if( esta(x,n)){
            cout<<"SI\n";
        }else{
            cout<<"NO\n";
        }
    }
    


    return  0;
}