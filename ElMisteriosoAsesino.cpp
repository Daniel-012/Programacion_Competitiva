#include<iostream>

using namespace std;

int main(){
    int a;
    int b;
    int n;
    int x;
    int y;
    cin>> a>> b;
    int mat[a][b]= {};
    cin>> n;
    while( n!=0){
        cin>> x>> y;
        mat[x-1][y-1]= 1;
        n--;
    }
    int cont =0;
    for(int j=0; j<a-1; j++){
        for(int i=0; i<b-1; i++){
            if(mat[j][i]==0 && mat[j][i+1]==0 && mat[j+1][i]==0 && mat[j+1][i+1]==0){
                cont++;
            }
        }

    }

    cout<< cont;

    return 0;
}