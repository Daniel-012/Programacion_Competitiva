#include<bits/stdc++.h>

using namespace std;

int dfs(int u,vector<vector<int>>& vec, vector<bool>& visitados, vector<int>& esciclo ){
    if(vec[u].size()== 0){
        esciclo[u]=1;
        return 1;
    }
    if(visitados[u]){
        return esciclo[u];
    }

    visitados[u]= true;

    int hsc=0;
    for(int i=0; i< vec[u].size(); i++){
        int hijo= vec[u][i];
        hsc+= dfs(hijo,vec, visitados, esciclo);
    }
    //si el total de hijos es igual  hijos sin ciclo entonces
    int t= vec[u].size();
    if(hsc== t){
        esciclo[u]=1;
    }else{
        esciclo[u]=0;
    }

    return esciclo[u];


}




int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int p,d,q;
    int i=0;
    int j=0;
    int x, y,z;

    cin>> p>>d>>q;

    vector<vector<int>> vec(p+1);
    vector<bool> visitados(p+1);
    vector<int> esciclo(p+1);

    for(i=0; i<d; i++){
        cin>>x>>y;
        while (y!=0){
            cin>>z;
            vec[x].push_back(z);
            y--;
        }

    }

    dfs(1, vec, visitados, esciclo);


    //for(i=1; i<=p; i++){
      //  cout<<esciclo[i]<<" ";
    //}

    bool verdad= true;
    for(i=0; i<q; i++){
        cin>> x;
        verdad= true;
        while(x!=0){
            cin>> z;
            if(visitados[z]== true){
                verdad= false;
            }

            x--;
        }
        if(verdad){
            cout<<"S\n";
        }else{
            cout<<"N\n";
        }
    }


    return 0;
}