#include<iostream>

using namespace std;

int  main(){
    int x;
    int mat[100][100], filas, columnas;
    cin>> filas;
    cin>> columnas;

    for( int j=0; j<filas; j++){
        for(int i=0; i<columnas; i++){
            cin>> mat[j][i];
        }
    }

    for( int i=0; i<columnas; i++){
        for(int j=0; j<filas; j++){
            cout<< mat[j][i]<< " ";
        }
        cout<<endl;
    }




    return 0;
}