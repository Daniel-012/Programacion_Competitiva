#include<bits/stdc++.h>

using namespace std;

int mat[1001][1001];
int actu[1001][1001] = {};
int mati[1001][1001];

int a, b;
int n, m;
int k, l;
int i=0, j=0;
int c, d;
int xx, yy;

void comprueba(int x, int y){
    yy=y;
    xx= x;
    bool dio= true;

    for(i=0; i< k; i++ ){
        y= yy;
        for(j=0; j<l; j++){
            if( mati[i][j] == mat[x][y]){
                y++;

            }else{
                
                dio= false;
                y++;

                
            }
        }
        x++;
    }

    if ( dio == true){
        for(xx; xx < x; xx++){
            for(y=yy; y<yy+l; y++){
                actu[xx][y]= 1;
            }
         }

    }



}


void mezcla(){

    for(int c=0; c<=n-k; c++){
        for(d=0; d<=m-l; d++){
            if( mat[c][d]== a && mat[c][d+1]== b){
                
                comprueba(c, d) ;
            }

        }
    }



}







int main(){

    cin>> n>> m;

    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            cin>> mat[i][j];
        }
    }

    cin>> k>> l;

    for( i=0; i<k; i++){
        for( j=0; j<l; j++){
            cin>> mati[i][j];
        }
    }

    a= mati[0][0];
    b= mati[0][1];

    mezcla();    

    for( i=0; i<n; i++){
        for(j=0; j<m; j++){
            cout<< actu[i][j]<<" ";
        }
        cout<<"\n";
    }


    return 0;
}