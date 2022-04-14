#include<bits/stdc++.h>

using namespace std;

char mat[101][101];

    int a;
    int b;

void rl( int x, int y,int ant){
    if( mat[x][y]== 'X' ){
        return;
    }
    if( x<0 || y>=b || x>=a || y<0){
        return;
    }

    if( mat[x][y] <  ant){
        ant= mat[x][y];
        mat[x][y]= 'X';
        rl(x+1,y,ant);
        rl(x-1,y,ant);
        rl(x,y+1,ant);
        rl(x,y-1,ant);
        rl(x+1,y+1,ant);
        rl(x-1,y-1,ant);
        rl(x+1,y-1,ant);
        rl(x-1,y+1,ant);


    }else{
        return;
    }







}





int main(){
    int ant;
    cin>> a>> b;
    int x;
    int y;
    cin>> x>> y;
    x--;
    y--;
    for(int i=0; i<a; i++){
        for(int j=0; j<b; j++){
            cin>> mat[i][j];
        }
    }
    ant= mat[x][y]; 

    rl(x, y,ant+1);


    for(int i=0; i<a; i++){
        for(int j=0; j<b; j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<"\n";
    }



    return 0;
}