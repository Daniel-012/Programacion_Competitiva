#include<bits/stdc++.h>

using namespace std;

int mat[10001][10001];

int n;

struct nodo{
    int x;
    int y;
};
int i=0;
int j=0;
int aux;
int l;

nodo alfa;
nodo beta;

void reverse(){


    for(l= alfa.x; l<= beta.x; l++){
        aux= mat[beta.x][alfa.y];
        mat[beta.x][alfa.y]= mat[alfa.x][alfa.y];
        mat[alfa.x][alfa.y]= aux;
        beta.x--;
    }

}





int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);


    cin>> n;
    int x=1;

    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            mat[i][j]= x;
            x++;
        }
    }

    cin>> n;
    char c;

    for(i=0; i<n; i++){
        cin>> c;
        if( c== 'R'){
            cin>> alfa.y>>alfa.x>>beta.x ;
            beta.y= alfa.y;

            reverse();
            

        }else{
            cin>> alfa.x>>alfa.y;

            cout<< mat[alfa.x][alfa.y]<<"\n";

        }
    }



    return 0;
}