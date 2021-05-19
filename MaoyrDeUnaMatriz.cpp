#include<iostream>

using namespace std;

int main(){
    int f;
    int c;
    cin>> f>> c;

    int mat[f][c];

    int x;
    int max= -100;
    for( int j=0; j< f; j++){
        for(int i=0; i<c; i++){
            cin>> x;
            if( x>= max){
                max= x;
            }
        }
    }


    cout<< max;


    return 0;
}