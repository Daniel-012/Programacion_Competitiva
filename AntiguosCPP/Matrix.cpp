#include<iostream>

using namespace std;

int main(){
    int filas= 100;
    int columnas=  100;
    int matrix[filas][columnas];
    cout<<"Filas: ";
    cin>> filas;
    cout<<"Columnas: ";
    cin>> columnas;
    int c=0;
    cout<<"La Matriz Resultante Es: "<<endl;
    for( int j=0; j<filas; j++){
        for( int i=0; i<columnas; i++){
            matrix[j][i]= c;
            c++;
        }
    }

    for( int j=0; j<filas; j++){
        for( int i=0; i<columnas; i++){
            cout<< matrix[j][i]<<"\t";
        }
        cout<<endl;
    }

    cout<<"La Matriz Con Las Columnas Al Reves Es: "<<endl;

    for( int j=0; j<filas; j++){
        for( int i=columnas-1; i>=0; i--){
            cout<< matrix[j][i]<<"\t";
        }
        cout<<endl;
    }

    cout<<"La Matriz Al Reves Es: "<<endl;

    for( int j=filas-1; j>=0; j--){
        for( int i=columnas-1; i>=0; i--){
            cout<< matrix[j][i]<<"\t";
        }
        cout<<endl;
    }


    return 0;
}