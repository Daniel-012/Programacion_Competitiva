#include<bits/stdc++.h>

using namespace std;

struct nodo{
    int x;
    int y;
    int c;
};

vector<int> vecx= {-1, 1, 0,0};
vector<int> vecy= { 0, 0, 1,-1};

void busca(nodo ini,nodo fin, int& n, int& t ,char mat[1000][1000],bool visi[1000][1000]){

    queue<nodo> cola;
    cola.push(ini);

    while (!cola.empty()){
        nodo actu= cola.front();
        cola.pop();

        for( int i=0; i<4; i++){
            nodo veci;
            veci.x=actu.x+vecx[i];
            veci.y=actu.y+vecy[i];
            veci.c= actu.c+1;

            if( veci.x<0 || veci.x>=n || veci.y<0 || veci.y>=n){
                continue;
            }
            if( mat[veci.x][veci.y]== '*'){
                continue;
            }
            if( visi[veci.x][veci.y]== true){
                continue;
            }

            if( veci.x== fin.x && veci.y== fin.y){
                if( veci.c<= t){
                    cout<<"YES ";
                }else{
                    cout<<"NO ";
                }
                cout<<veci.c<<"\n";
                return;
            }
            //cout<<" ["<<veci.x<<" "<<veci.y<<"] ";
            cola.push(veci);
            visi[veci.x][veci.y]= true;   
        }
    }
    
}





int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int c,i, j, n, t;

    cin>> c;

    nodo ini;
    nodo fin;

    for(int k=0; k<c; k++){
        cin>> n>>t;
        char mat[1000][1000]= {};
        bool visi[1000][1000]= {};
    
        for(i=0; i<n; i++){
            for(j=0; j<n; j++){
                cin>> mat[i][j];
                if( mat[i][j]== 'C'){
                    ini.x= i;
                    ini.y= j;
                    ini.c=0;
                }
                if( mat[i][j]== 'J'){
                    fin.x= i;
                    fin.y= j;
                    ini.c=0;
                }

            }
        }

        busca(ini, fin, n, t, mat, visi);

    }

    return 0;
}