#include<bits/stdc++.h>

using namespace std;

/*
X.....A..X
X...XXXXXX
X.X......X
X.XXXXX..X
X.X...X..X
X.X.F.XX.X
X..X.....X
X.D.X....X
XXXXXXXXXX
XXXXXXXXXX
*/

char mat[100][100];
bool vis[100][100]= {};
struct pos{
    int x;
     int y;
     int pas;
};

pos final= {0,0,0};
int n;
int m;

vector<int> mx= {-1, 0, 1, 0};
vector<int> my= {0,1,0,-1};

void mostrarmat(int n, int m);
int mima(pos primero);

int main(){
    
    cout<<"Ingresa el Tamano del mapa: ";
    cin>> n>> m;
    cout<<"Ingresa el Mapa"<<"\n";
    pos primero;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>> mat[i][j];
            if( mat[i][j]== 'F'){
                primero.x= i;
                primero.y= j;
            }
        }
    }

   cout<<mima(primero);



    mostrarmat(n,m);
    return 0;
}





void mostrarmat(int n, int m){
    for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cout<< mat[i][j]<<" ";
            }
            cout<<"\n";
        }
}
int o=0;

int mima(pos primero){
    queue <pos> cola;
    cola.push(primero);

    while( !cola.empty() ){
        pos actual= cola.front();
        cola.pop();
        if(actual.x== final.x && actual.y== final.y){
            return actual.pas;
        } 
    vis[actual.x][actual.y]= true;
    for(int i=0; i<4; i++){
        pos sig;
        sig.x= actual.x+ mx[i];
        sig.y= actual.y+ my[i];
        sig.pas= actual.pas+1;

        if( sig.x<0 || sig.y<0 || sig.x>=n || sig.y >= m){
            continue;
        }
        if( mat[sig.x][sig.y] == 'A'){
            continue;
        }
        if( vis[sig.x][sig.y]== true){
            continue;
        }
        cola.push(sig);
    }
    }
    return -1;
    

}

