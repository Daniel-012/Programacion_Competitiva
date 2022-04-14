#include<bits/stdc++.h>

using namespace std;

bool mapa[2501][2501]={};
int cont=0;
int n, m;

struct nodo{
    int x;
    int y;
    int c;

};

queue<nodo> cr;
vector<int> vecx= {0, 0 , 1, -1};
vector<int> vecy= {1, -1, 0 , 0};

void crecerroca(){
    if(!cr.empty()){
        nodo actu= cr.front();
        cr.pop();
        for(int i=0; i<4; i++){
        nodo veci;
        veci.x= actu.x+ vecx[i];
        veci.y= actu.y+ vecy[i];
        if(veci.x<0 || veci.y<0 || veci.x>= n || veci.y>=m ){
            continue;
        }
        if( mapa[veci.x][veci.y]== true){
            continue;
        }
        mapa[veci.x][veci.y]= true;
        cr.push(veci);
        
    }
    
    }
    
}



bool recorrido(nodo ini, nodo fin, int t){
    queue<nodo> cola;
    cola.push(ini);

    while(!cola.empty()){
        nodo actu= cola.front();
        cola.pop();
        if( mapa[fin.x][fin.y]==true){
            return false;
        }
        for(int i=0; i<4; i++){
            nodo veci;
            veci.x= actu.x+ vecx[i];
            veci.y= actu.y+ vecy[i];
            veci.c= actu.c+1;

            if(veci.x<0 || veci.y<0 || veci.x>= n || veci.y>=m ){
                continue;
            }
            if( mapa[veci.x][veci.y]== true){
                continue;
            }

            if( veci.x== fin.x && veci.y== fin.y){
                cont= veci.c;
                return true;
            }
            if( veci.c%t==0){
                crecerroca();
            }
            //cout<<" ["<<veci.x<<" "<<veci.y<<"] ";
            cola.push(veci);
            mapa[veci.x][veci.y]= true;
              
        }
    }

    return false;
}







int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    nodo ini, fin, roca;
    int t;
    cin>> n>>m;

    cin>>ini.x>>ini.y>>roca.x>>roca.y>>t>>fin.x>>fin.y;

    ini.x--;
    ini.y--;
    fin.x--;
    fin.y--;
    roca.x--;
    roca.y--;
    ini.c=0;
    
    cr.push(roca);

    if( recorrido(ini, fin, t)){
        cout<<"se llego al planeta en "<<cont<<" anios luz";
    }else{
        cout<<"no se pudo llegar al planeta";
    }

    return 0;
}