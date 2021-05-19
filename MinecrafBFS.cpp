#include<bits/stdc++.h>

using namespace std;

char mat[2000][2000];
bool ya[2000][2000]={};

vector<int> vecx= {1, 0, -1 , 0};
vector<int> vecy= {0, -1, 0, 1};

struct nodo{
    int x;
    int y;
    int pas;
};

int n;
int m;
int e;
nodo fin;
int c= 1000000;


bool operator<(nodo a, nodo b){
    return a.pas> b.pas;
}


void camino_corto(nodo ini){
    priority_queue <nodo> cola;
    cola.push(ini);
    while(!cola.empty()){
        nodo actual= cola.top();
        cola.pop();
        for(int i=0; i<4; i++){
            nodo sig;
            sig.x=actual.x+ vecx[i];
            sig.y= actual.y+vecy[i];
            

            if( sig.x<0 || sig.y<0 || sig.x>= n || sig.y>= m){
                continue;
            }

            if( mat[sig.x][sig.y]== '.' && ya[sig.x][sig.y]!= true ){
                sig.pas= actual.pas+1;
            }else if(mat[sig.x][sig.y] != '#' && ya[sig.x][sig.y]!= true ){

                
                    e= mat[sig.x][sig.y]- '0';
                    sig.pas= actual.pas+ e+1; 
                
                

            }

            if( ya[sig.x][sig.y]== true){
                continue;
            }

            if( mat[sig.x][sig.y]== '#'){
                continue;
            }

            if( sig.x== fin.x && sig.y== fin.y){
                if( sig.pas<= c){
                     c= sig.pas;
                }
                
                
            }

            cola.push(sig);
            ya[sig.x][sig.y]= true;

        }
    }



}





int main(){
    cin>> n>> m;
    nodo inicio;
    cin>> inicio.x>> inicio.y;
    cin>> fin.x>> fin.y;
    inicio.x--;
    inicio.y--;
    inicio.pas=0;
    fin.x--;
    fin.y--;

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>> mat[i][j];
        }
    }

    camino_corto(inicio);

    cout<<c;


    return 0;
}