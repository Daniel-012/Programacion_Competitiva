#include<bits/stdc++.h>

using  namespace std;

int tablero[9][9];
short int coco=0;
short int pepe=0;

bool checa( int x, int y){
    for(int i=x+1; i<9; i++){
        if( tablero[i][y] !=0){
            return false;
        }
    }

    for(int i=x-1; i>=1; i--){
        if( tablero[i][y] !=0){
            return false;
        }
    }

    for(int i=y+1; i<9; i++){
        if( tablero[x][i] !=0){
            return false;
        }
    }

    for(int i=y-1; i>=1; i--){
        if( tablero[x][i] !=0){
            return false;
        }
    }

    int i=x;
    int j=y;
    while(i+1<9 &&j+1<9 ){
        if( tablero[i+1][j+1] !=0){
            return false;
        }
        i++;
        j++;
    }
    i=x;
    j=y;
    while(i-1>=1 && j-1>=1 ){
        if( tablero[i-1][j-1] !=0){
            return false;
        }
        i--;
        j--;
    }   
    i=x;
    j=y;

    while(i+1<9 && j-1>=1 ){
        if( tablero[i+1][j-1] !=0){
            return false;
        }
        i++;
        j--;
    }
    i=x;
    j=y;

    while(i-1>= 1 &&j+1<9 ){
        if( tablero[i-1][j+1] !=0){
            return false;
        }
        i--;
        j++;
    }


    return true;
}




bool no_chocan(int a, int b ){
    int c=0;
    for(int i=1; i<9; i++){
        for(int j=1; j<9; j++){
            if( tablero[i][j] !=0){
                if( checa(i,j)== false){
                    return false;
                }
                c++;
            }

        }
    }

    if( c>=8){
        coco++;
          

    }

    return true;
}







void llenar( int x, int y){

    if( coco!=0){
        return;
    }
    
    
    
    if( no_chocan(1,1)== false){
        return;
    }


    if( x>=9 || y>=9){
        coco++;
        if( no_chocan(1,1)== true){
            for(int i=1; i<9; i++){
                for(int j=1; j<9; j++){
                    if( tablero[i][j] !=0){
                        cout<<i<<" "<<j;
                    }
                    
                }
                cout<<"\n";
            }
            pepe++;
        }

        return;
    }

    for(int i=1; i<9; i++){
        tablero[x][i]++;
        llenar(x+1, 1);
        tablero[x][i]--;;

    }



}





int main(){
    int n;
    int x;
    int y;
    cin>> n;



    while( n!=0){
        cin>> x>> y;
        tablero[x][y]= 1;
        n--;
    }
    
    llenar( 1,1);
    if( pepe ==0){
        cout<<0;
    }


    return 0;
}