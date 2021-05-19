#include<bits/stdc++.h>

using namespace std;

struct nodo
{
    int pos;
    int can;
    int c;
};


bool operator< ( nodo a, nodo b){
    if( a.c<b.c){
        return false;
    }else{
        return true;
    }
}


int grafo( vector<vector<nodo>>& vec, vector<bool>& pass, nodo ini, int fin){
    priority_queue<nodo> cola;
    cola.push( ini);
    nodo actu;
   nodo veci;
    while (!cola.empty()){
        actu= cola.top();
        cola.pop();
        for( int i=0; i< vec[actu.pos].size(); i++){
            veci;
            veci.pos= vec[actu.pos][i].pos;
            veci.c = actu.c+ vec[actu.pos][i].can;

            if( pass[veci.pos]){
                continue;
            }
            if(veci.pos== fin){
                return veci.c;
            }

            cola.push(veci);
            pass[veci.pos]= true;
        }
    }
    
    return 0;

}



int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    int num;
    int i=0;
    int j=0;
    int y=0;
    int z=0;

    vector<vector<int>> actual(3);
    for(i=0; i<3; i++){
        actual[i].push_back(0);
    }
    vector<vector<int>> sig(3);
    for( i=0; i<3; i++){
        sig[i].push_back(0);
    }
    cin>> n;
    vector<vector<nodo>> vec(n*3);
    vector<bool> pass(n*3, false);

    for(i=0; i<1; i++){
        for(j=0;j<3; j++){
            cin>> sig[i][j];
        }
    }
    
    num= sig[0][1];
    int k=0;
    nodo actu;

    for(int l=0; l<n-1; l++){
        actual=sig; 
        for(y=0; y<1; y++){
            for(z=0;z<3; z++){
                cin>> sig[y][z];
            }
        }
        // Se leeen las dos matrices y ahora

        for( i=0; i<1; i++){
            for(j=0;j<3; j++){
                if( j==0){
                    actu.pos= k;
                    actu.can= actual[i][j];
                    vec[k].push_back(actu);
                    actu.pos= k+1;
                    actu.can= actual[i][j+1];
                    vec[k].push_back(actu);
                    actu.pos= k+3;
                    actu.can= sig[i][j];
                    vec[k].push_back(actu);
                    actu.pos= k+4;
                    actu.can= sig[i][j+1];
                    vec[k].push_back(actu);

                }else if( j==1){
                    actu.pos= k;
                    actu.can= actual[i][j];
                    vec[k].push_back(actu);
                    actu.pos=k+2;
                    actu.can= sig[i][j-1];
                    vec[k].push_back(actu);
                    actu.pos=k+4;
                    actu.can= sig[i][j+1];
                    vec[k].push_back(actu);
                    actu.pos=k+1;
                    actu.can= actual[i][j+1];
                    vec[k].push_back(actu);
                    actu.pos=k+3;
                    actu.can= sig[i][j];
                    vec[k].push_back(actu);

                }else if( j==2 ){
                    actu.pos= k;
                    actu.can= actual[i][j];
                    vec[k].push_back(actu);
                    actu.pos= k+2;
                    actu.can= sig[i][j-1];
                    vec[k].push_back(actu);
                    actu.pos= k+3;
                    actu.can= sig[i][j];
                    vec[k].push_back(actu);

                }
                
                k++;
            }
        }

    }

    // if(i== n-1){
    //     if( j==0){
    //     actu.pos= k;
    //     actu.can= mat[i][j];
    //     vec[k].push_back(actu);
    //     actu.pos=k+1;
    //     actu.can= mat[i][j+1];
    //     vec[k].push_back(actu);

    //     }else if( j==1 ){
    //     actu.pos= k;
    //     actu.can= mat[i][j];
    //     vec[k].push_back(actu);
    //     actu.pos=k+1;
    //     actu.can= mat[i][j+1];
    //     vec[k].push_back(actu);

    //     }else if( j==2){
    //     actu.pos= k;
    //     actu.can= mat[i][j];
    //     vec[k].push_back(actu);

    //     }

    // }
   

    // for(int i=0; i<n*3; i++){
    //     cout<<"[";
    //     for(int j=0; j<vec[i].size(); j++){
    //         cout<<vec[i][j].can<<" ";
    //     }
    //     cout<<"] ";
       
    // }

    actu.pos=1;
    actu.can=0;
    actu.c=num;

    cout<<grafo(vec, pass, actu, n*3-2);

    return 0;
}