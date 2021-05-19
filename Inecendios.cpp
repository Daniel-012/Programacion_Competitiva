#include<bits/stdc++.h>

using namespace std;

char cuadros[11][11];
    int n;
    int m;


void fuego( int x, int y, int min){
    if( x<0 || y<0 || y>= m || x>= n){
        return;
    }
    if( cuadros[x][y]=='.' ){
        return;
    }

    int z= cuadros[x][y]-'0';
    int d= z-min;
    min= min-z;
    //cout<<min;
    if( min<0){
        char pas= d+'0' ;
        cuadros[x][y]=pas ;
        return;
    }
    if( min==0){
        cuadros[x][y]= '.';
        return;
    }
    
    cuadros[x][y]= '.';
    fuego(x+1,y, min);
    fuego(x-1,y,min);

    fuego(x,y+1,min);

    fuego(x,y-1,min);



}


void aster(int x,int y){

    for(int i=0; i<x-1;i++){
        for(int j=0; j<y-1; j++){
            if( cuadros[i][j]== '.'){

                if( cuadros[i+1][j] != '.'){
                    cuadros[i+1][j]= '*';
                }
                if( cuadros[i][j+1] != '.'){
                    cuadros[i][j+1]= '*';
                }
            }
        }
    }
    




}







int main(){


    int k;

    cin>> n>> m;

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>> cuadros[i][j];
        }
    }

    cin>> k;

    fuego(0, 0, k);

    aster(n,m);

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<< cuadros[i][j];
        }
        cout<<"\n";
    }
    return 0;
}