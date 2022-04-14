#include<bits/stdc++.h>

using namespace std;

int n;

char mat[1000][1000];
bool paso[2001][2001] = {};

struct nodo{
    int x;
    int y;
    int nn;
    int na;
    int pos;
};

vector<int> vecx= {-1, 0, 1, 0};
vector<int> vecy= { 0, 1, 0, -1};

bool operator<(nodo a, nodo b){
    return a.pos<b.pos;
}

priority_queue <nodo> cola_mayor;


bool rombo( nodo ini){
    queue <nodo> cola;
    cola.push(ini);
    int nan= ini.na;
    
    

    while(!cola.empty()){
        nodo actual= cola.front();
        cola.pop();

        for(int i=0; i<4; i++){
            nodo sig;
            sig.x= actual.x+vecx[i];
            sig.y= actual.y+vecy[i];
            

            if( sig.x<0|| sig.y<0 || sig.x>= n || sig.y>=n){
                continue;
            }

            if( mat[sig.x][sig.y]== '0'){
                sig.nn= actual.nn+1;
            }

            if( sig.nn> nan){
                return false;
            }

            if( paso[sig.x][sig.y]== true){
                continue;
            }

            if( mat[sig.x][sig.y]== '.'){
                continue;
            }

            
            paso[sig.x][sig.y]= true;


            cola.push(sig);

        }


    }

    return true;


}




int main(){

    cin>> n;
    int pas=0;
    vector<int> vec;

    nodo ya;

    for(int i=0; i<n; i++){

        for(int j=0; j<n; j++){
            cin>> mat[i][j];

        }
        
    }

    for(int i=0; i<n; i++){
        pas=0;
        for(int j=0; j<n; j++){
            while(mat[i][j]== '0' && j<n){
                j++;
                pas++;
            }
        
            if(pas!=0){
                if( pas>= 3 && pas%2 != 0){
                    ya.x= i;
                    ya.y= j-(pas/2)-1;
                    ya.nn=0;
                    ya.na= pas/2+1;
                    ya.pos= pas;
                    cola_mayor.push(ya);
                }
            }
            pas=0;
        }
        
    }
    nodo c;
    c.pos= 0;

    while( !cola_mayor.empty()){

        if( rombo(cola_mayor.top() ) == true){
            ya= cola_mayor.top();
            if( ya.pos>= c.pos){
                c.pos= ya.pos;
            }
        }
       

        cola_mayor.pop();


    }

    if( c.pos==0){
        cout<<-1;
    }else{
        cout<< c.pos;
    }





    return 0;
}