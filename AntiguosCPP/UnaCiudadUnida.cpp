#include<bits/stdc++.h>

using namespace std;


bool camino_avan( int a, int b, vector<vector<int>>& vec){
    vector<bool> visitados(vec.size());

    queue<int> cola;
    cola.push(a);
    visitados[a]= true;

    while(!cola.empty()){
        int actu= cola.front();
        cola.pop();
        if( actu== b){
            return true;
        }

        for(int i=0; i<vec[actu].size(); i++){
            int sig= vec[actu][i];
            if( !visitados[sig]){
                visitados[sig]= true;
                cola.push(sig);
            }

        }
    }
    
    return false;



}






int main(){
    //ios_base::sync_with_stdio(0);
    //cin.tie(0);

    int n;
    int m;
    
    cin>> n>> m;

    vector<vector<int>> vec(n) ;
    
    int a;
    int b;

    for(int i=0; i<m; i++){
        cin>> a>>b;
        a--;
        b--;
        vec[a].push_back(b);
        vec[b].push_back(a);

    }

    int c=0;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(!camino_avan(i, j, vec)){
            c++;
            }
        }

    }
    cout<<c/2;


    return 0;
}