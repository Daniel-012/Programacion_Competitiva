#include<bits/stdc++.h>

using namespace std;

int main(){
    //ios_base::sync_with_stdio(0);
    //cin.tie(0);
    int n;
    
    cin>> n;

    int mat[n][n];

    set<int> cubeta;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>> mat[i][j];
        }
    }
    int suma=0;

    for(int i=0; i<n; i++){
        suma=0;
        for(int j=0; j<n; j++){
            suma+= mat[i][j];
        }
        cubeta.insert(suma);
    }

    //Suma Vertical Derecha
    suma=0;
    int j=n-1;
    for(int i=0; i<n; i++){
        suma+= mat[i][j];
        j--;
       
    }
    //cout<<suma<<" ";
    cubeta.insert(suma);

    //Suma Vertical Izquierda

    suma=0;
    j=0;
    for(int i=0; i<n; i++){
        suma+= mat[i][j];
        j++;
       
    }
    //cout<<suma<<" ";
    cubeta.insert(suma);

    //Imprime Salida

    if( cubeta.size()== 1){
        cout<<1;
    }else{
        cout<<0;
    }



    return 0;
}
