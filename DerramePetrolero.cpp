#include<bits/stdc++.h>
#define maxi 200

using namespace std;

char mapa[maxi][maxi];
    int fil;
    int col;
    int dias;
    int f,c;


void mapos(int x, int y,    int d){

    if( x<0 || y>=col || x>=fil || y<0){
        return;
    }

    if( mapa[x][y]== '*'){
        return;
    }

      if( d<=0){
        return;
    }

  
    

    if( mapa[x][y]== '#'  ){
        return;
    }

    mapa[x][y]='*';
    d--;
    

    mapos(x+1,y,d);
    mapos(x-1,y, d);
    mapos(x,y+1,d);
    mapos(x,y-1, d);
    


}



int main(){
    int d;

    cin>> fil>> col>> dias;

    for(int i=0; i<fil; i++){
        for(int j=0; j<col; j++){
            cin>> mapa[i][j];
            if(mapa[i][j] == '$'){
                f= i;
                c= j;
            }
        }
    }
    d= dias+1;

    mapos(f,c, d);

    mapa[f][c]='$';
    cout<<"\n";

    for(int i=0; i<fil; i++){
        for(int j=0; j<col; j++){
            cout<< mapa[i][j];
        }
        cout<<"\n";
    }



    return 0;
}