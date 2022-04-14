#include<bits/stdc++.h>

using namespace std;


char mapa[100][100];
int d;
int n;
int m;

struct nodo{
    int x;
    int y;
};

void tiempo(nodo primero){
    queue  <nodo> pos;
    pos.push(primero);

    while( !pos.empty()){
        
    }

}

int main(){
    cin>>n>> m>> d;
    nodo act;
    int x; int y;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>> mapa[i][j];
            if(mapa[i][j]== '$'){
                act.x=i;
                act.y=j;
            }
        }
    }

    tiempo(act);



    return 0;
}