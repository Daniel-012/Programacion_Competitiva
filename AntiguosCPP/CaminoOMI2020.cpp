#include<bits/stdc++.h>

using namespace std;

int n, m;
int mini= INT_MAX;
char mat[1001][1001];
int com[1001][1001]= {};

vector<int> vec;
vector<int> vecx= {-1, 0, 1, 0};
vector<int> vecy= { 0, 1, 0, -1};

struct nodo{
    int x;
    int y;
    int pas;
    int zz;
};

void camino(nodo z){
    queue<nodo> cola;
    cola.push(z);

    while(!cola.empty()){
        nodo actual;
        actual= cola.front();
        cola.pop();

        for(int i=0; i<4; i++){
            nodo sig;
            sig.x= actual.x+ vecx[i];
            sig.y= actual.y+ vecy[i];
            sig.pas= actual.pas+1;
            sig.zz= actual.zz;

            if( mat[sig.x][sig.y]== 'X'){
                sig.zz= actual.zz-1;;
            }

            if( sig.zz==0){
                continue;
            }
            if(sig.x<0 || sig.x>=n || sig.y<0 || sig.y>=m ){
                continue;
            }

            if( com[sig.x][sig.y]== 2){
                continue;
            }

            cola.push( sig);
            if( mat[sig.x][sig.y]== 'Z'){
                if( sig.pas<= mini){
                    mini=sig.pas;
                }
            }
            com[sig.x][sig.y]++;

        }

    }

}







int main(){
    cin>> n>> m;
    nodo z;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>> mat[i][j];
            if(mat[i][j] == 'Q'){
                z.x= i;
                z.y= j;
                z.pas=0;
                z.zz= 2;
            }
            
        }
    }

    camino(z);

    if( mini== INT_MAX){
        cout<< -1;
    }else{
        cout<<mini;
    }

    return 0;
}