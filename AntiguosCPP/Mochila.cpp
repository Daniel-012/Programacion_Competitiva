#include<bits/stdc++.h>

using namespace std;

long long int maxi=0;
int mat[1001][50000]={};

long long int a, b, n, peso;

void busca( vector<vector<int>>&vec, long int suma, long int valor, int i){
    if( suma>peso){
        return;
    }
    
    if( valor>= maxi){
        maxi= valor;
    }
    if( i>= vec.size()){
        return;
    }
    
    int z= mat[i][suma];

    if(z!=0){
        valor=+ z;
        if( valor>= maxi){
            maxi= valor;
        }
        return ;
    }
    mat[i][suma] =valor;

    //cout<< suma<<" "<<valor<<" "<<i<<" ";


    busca(vec, suma, valor, i+1);

    busca(vec, suma+vec[i][0], valor+ vec[i][1], i+1);
    
   
}


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    
    cin>> n>>peso;

    vector<vector<int>> vec(n);

    for(int i=0; i<n; i++){
        cin>> a>> b;
        vec[i].push_back(a);
        vec[i].push_back(b);
    }

    
    busca(vec,0, 0, 0);
    

    cout<<maxi;


    return 0;
}