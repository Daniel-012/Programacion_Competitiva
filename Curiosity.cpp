#include<bits/stdc++.h>

using namespace std;

int n, m, k, mini= 10000000;

struct nodo
{
    int x;
    int y;
    int pas;
};

nodo ini;
nodo fin;

vector<int> vecx;
vector<int> vecy;

bool mat[1000][1000]= {};




void camino(){
    queue<nodo> cola;
    cola.push(ini);

    while(!cola.empty()){
        nodo actual= cola.front();
        cola.pop();

        for(int i=0;i<k; i++){
            nodo sig;
            sig.x= actual.x+vecx[i];
            sig.y= actual.y+vecy[i];
            sig.pas= actual.pas+1;

            if(sig.x<0 || sig.x>=n || sig.y<0 || sig.y>=m ){
                continue;
            }

            if( mat[sig.x][sig.y]== true){
                continue;
            }

            if( sig.x== fin.x && sig.y== fin.y){
                if(sig.pas<= mini){
                    mini= sig.pas;
                }
            }

            mat[sig.x][sig.y] = true;

            cola.push( sig);


        }

    }



}




int main(){
    cin>> n>> m>> k;
    cin>> ini.x>> ini.y;
    ini.x--;
    ini.y--;
    ini.pas=0;
    cin>> fin.x>> fin.y;
    fin.x--;
    fin.y--;

    int xx, yy;

    for(int i=0; i<k; i++){
        cin>> xx;
        vecx.push_back(xx);
        cin>> yy;
        vecy.push_back(yy);
    }

    camino();

    cout<< mini;




    return 0;
}