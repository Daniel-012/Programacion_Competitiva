#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){
    int n;
    int x;
    int contador=0;
    string pala;
    vector <int> vec;
    int mat[100][100], f, c;
    cin>> n;
    f=n;
    c=3;
    for(int i=0; i<n; i++){
        cin>> pala;
        for( int j=0; j<3; j++){
            cin>> mat[i][j];
        }

    }
    for(int i=0; i<3; i++){
        cin>> x;
        vec.push_back(x);
    }

    for(int i=0; i<n; i++){
        if ( mat[i][2]< vec[2]){
            contador++;
        }else if( mat[i][2]== vec[2]){
            if ( mat[i][1]< vec[1]){
            contador++;
        }else if( mat[i][1]== vec[1]){
            if ( mat[i][0]< vec[0]){
            contador++;
        }
        }
        }
    }



    cout<< contador;


    return 0;
}