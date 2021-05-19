#include<iostream>

using namespace std;

int main(){
    int n;
    int s=0;
    int n2;
    int mat[100][100],f,c;
    cin>> n;
    f=n;
    c=n;
    n2= n*n;
    for(int i=0; i<f; i++){
        for(int j=0; j<c; j++){
            cin>> mat[i][j];

        }
    }
    for(int i=0; i<f; i++){
        for(int j=0; j<c; j++){
            if (mat[i][j]==mat[j][i]){
                s++;
            }
        }
    }

    if( s== n2){
        cout<<"SI";
    }else{
        cout<<"NO";
    }

    return 0;
}