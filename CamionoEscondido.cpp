#include<bits/stdc++.h>

using namespace std;

int mat[300][300];
bool rev[300][300][50]= {};
vector<int> vecn;
vector<int> vecx= {-1, 0, 1, 0};
vector<int> vecy= { 0, 1, 0, -1};

struct nodo{
    int x;
    int y;
    int pas;
};


int n, k, mini= INT_MAX;
nodo fin;

void camino(nodo ini){
    queue<nodo> cola;
    cola.push(ini);
    int z=0;

    while( !cola.empty()){
        nodo actual= cola.front();
        cola.pop();
        if( z>= k){
            z=0;
        }
        
        
        for(int i=0; i<4; i++){
            nodo sig;

            sig.x= actual.x+vecx[i];
            sig.y= actual.y+vecy[i];
            sig.pas= actual.pas+1;

            if(sig.x<0 || sig.x>=n || sig.y<0 || sig.y>=n ){
                continue;
            }

            if( rev[sig.x][sig.y][z]== true){
                continue;
            }
            if( sig.x== fin.x && sig.y== fin.y){
                if( sig.pas<= mini){
                    mini= sig.pas;
                }
                return;
            }
            
            if( mat[sig.x][sig.y] != vecn[z]){
                continue;
            }

            rev[sig.x][sig.y][z]= true;

           
            
            
            cola.push( sig);

        }
        nodo p= cola.front();
        if( mat[actual.x][actual.y]== mat[p.x][p.y]){
            z=z;
        }else{
            z++;
        }

        

    }


}




int main(){
    cin>> n>> k;
    int x;
    for(int i=0; i<k; i++){
        cin>>x;
        vecn.push_back(x);
    } 
    
    nodo ini;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>> mat[i][j];
            if( i== 0 && mat[i][j]== 1){
                ini.x=i;
                ini.y= j;
                ini.pas=1;
            }
            if( i== n-1 && mat[i][j]== 1){
                fin.x=i;
                fin.y= j;
                
            }
        }
    }


    camino(ini);


    cout<<mini;


    return 0;
}