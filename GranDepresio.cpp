#include<bits/stdc++.h>

using namespace std;

struct nodo
{
    int a;
    int b;
};
int n;
int maxi=0;
nodo pas;

bool operator<( nodo i, nodo j){
    if( i.b< j.b){
        return true;
    }else{
        return false;
    }
}



void dfs(vector<nodo>& vec, set<nodo>& suma, int actub,int actua, int i){
    if( i>=n ){
        return;
    }
    pas.b= actub+vec[i].b;
    pas.a= actua+vec[i].a;  
    suma.insert(pas);
    dfs(vec, suma, actub+vec[i].b,actua+vec[i].a, i+1);
    dfs(vec, suma, actub,actua,  i+1);

}


int binari(vector<nodo> suma, int ini, int fin, int ob){
    int mitad;

    while(ini<fin){
        mitad= ini+(fin-ini+1)/2;
        if(suma[mitad].b<= ob ){
            if(ob==suma[mitad].b){
                cout<<suma[mitad].b;
            }else{
               ini= mitad;
            }
        }else{
            fin=mitad-1;
              
        }
    }

    //cout<<suma[ini].b<<" "<<suma[mitad].b<<" "<<suma[fin].b;  
    maxi= 0;
    for(int i=0; i<=ini; i++){
        if(  suma[i].a>=maxi){
            maxi= suma[i].a;
        }
    }
    return maxi;
}





int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int x;
    int tope;
    long int s=0;
    
    while(cin>> n){

    vector<nodo> vec(n);

    for(int i=0; i<n; i++){
        cin>>vec[i].a>>vec[i].b; 
    }

    set<nodo> suma;

    dfs( vec, suma, 0, 0, 0);
    
    vector<nodo>vec2(suma.size());
    int j=0;
    for(nodo x: suma){
        //cout<<x.b<<" ";
        vec2[j]=x;
        j++;
    }

    cin>> x;
    s=0;
    for(int i=0; i<x; i++){
        cin>> tope;
        s+= binari( vec2,0, suma.size(), tope);
    }
    cout<<s<<"\n";

    }

    



    return 0;
}