#include<bits/stdc++.h>
#define maxi 5001
using namespace std;


bool mat[maxi][maxi]= {};

vector<int> vecx= {1,0 , -1, 0 };
vector<int> vecy= {0,-1, 0, 1 };



struct nodo{
    int x;
    int y;
    int c;
    
};

bool camino(nodo ini,nodo fin, int z){
    queue<nodo> cola;
    ini.c=0;
    cola.push(ini);

    while( cola.empty() != true){
        nodo actu= cola.front();
        cola.pop();
        for(int i=0; i<4; i++){
            nodo vecino;
            vecino.x= actu.x+ vecx[i];
            vecino.y= actu.y+ vecy[i];
            vecino.c= actu.c+1;

            if( vecino.x<0 || vecino.y<0 || vecino.x >= maxi || vecino.y>= maxi ){
                continue;
            }

            if( mat[vecino.x][vecino.y]== false){
                continue;
            }

            if( vecino.x== fin.x && vecino.y== fin.y){
                cout<<vecino.c;
                if( z== vecino.c){
                    return true;
                }else{
                    return false;
                }
            }

            mat[vecino.x][vecino.y]== false;
            cola.push(vecino);

        }
    }


    return true;
}






int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int a;
    nodo ini;
    nodo fin;
    ini.x= maxi/2;
    ini.y= maxi/2;
    fin= ini;

    mat[ini.x][ini.y]= true;

    cin>> a;
    char p;

    for(int i=0; i<a; i++){
        cin>> p;
        if( p== 'L'){
            fin.y--;
        }else if( p== 'R'){
            fin.y++;
        }else if( p== 'U'){
            fin.x--;
        }else{
            fin.x++;
        }
        mat[fin.x][fin.y]= true;
    }
    mat[fin.x][fin.y]= true;


    if( camino(ini,fin, a)== true){
        cout<<'S';
    }else
    {
        cout<< 'N';
    }
    
   
    
    




    return 0;
}