#include<bits/stdc++.h>
#define tam 2003

using namespace std;
int n;
int m;
int maxi= 0;
char mapa[tam][tam];
bool revi[tam][tam]= {};

struct nodo{
    int x;
    int y;
    int pas;
};

vector<int> vecx= {-1, 0, 1, 0};
vector<int> vecy= { 0, 1, 0, -1};
queue<nodo> cola;

void bfs(){
    
    while( !cola.empty()){
        
        nodo actual = cola.front();
        cola.pop();
        

        for(int i=0; i<4; i++){
            nodo sig;
            sig.x=actual.x + vecx[i];
            sig.y=actual.y + vecy[i];
            sig. pas= actual.pas+1; 

            if(sig.x<0 || sig.x>=n || sig.y<0 || sig.y>=m ){
                continue;
            }

            if( mapa[sig.x][sig.y]== '#' ){
                continue;
            }

            if(revi[sig.x][sig.y]== true ){
                continue;
            }
            revi[sig.x][sig.y]= true;
            int d= sig.pas;
            if( d>= maxi){
                maxi= sig.pas;
            }
            cola.push( sig);

        }
    }

}


int main(){
    cin>> n>>m;

    nodo z;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>> mapa[i][j];
            if( mapa[i][j]== 'G'){
                z.x= i;
                z.y= j;
                z.pas=0;
                cola.push(z);
            }
        }
    }


    bfs();

    cout<< maxi;


    return 0;
}