#include<bits/stdc++.h>
#define ma 21

using namespace std;

int mat[ma][ma];
int a;
int b;

int cuadro( int x, int y){
    int s=0;
    if( mat[x][y]==9){
        return 9;
    }else{
        if(mat[x+1][y]==9 ){
            s++;
        }
        if(mat[x+1][y-1]==9 ){
            s++;
        }
         if(mat[x-1][y-1]==9 ){
            s++;
        }
        if(mat[x-1][y+1]==9 ){
            s++;
        }
        if(mat[x+1][y+1]==9 ){
            s++;
        }
        if(mat[x-1][y]==9 ){
            s++;
        }
        if(mat[x][y+1]==9 ){
            s++;
        }
        if(mat[x][y-1]==9 ){
            s++;
        }


    }

    return s;
}


void caminos(  int mm[ma][ma]){
    for(int i=0; i<a; i++){
        for(int j=0; j<b; j++){
            mm[i][j]=cuadro(i, j);
            
        }
        
    }

    for(int i=0; i<a; i++){
        for(int j=0; j<b; j++){
            cout<< mm[i][j]<<" ";
            
        }
        cout<<"\n";
    }

}






int main(){
    cin>> a>> b;
    for(int i=0; i<a; i++){
        for(int j=0; j<b; j++){
            cin>> mat[i][j];
            if(mat[i][j]== 1 ){
                mat[i][j]= 9;
            }
        }
    }

    caminos(mat);


    return 0;
}