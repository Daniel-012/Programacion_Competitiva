#include<bits/stdc++.h>

using namespace std;

vector <int> v2;

struct nodo
{
    int a;
    int b;
};
int j=0;
stack<nodo> pis;



void ar( nodo z, nodo a, int c, vector<nodo>& vec){
    if( j== 1){
        return;
    }
    nodo f= pis.top();
    if(z.a== f.a && z.b== pis.size() || z.a== f.b && z.b== pis.size() ){
        j++;
        return;
    }
    if( a.a != vec[c].a && a.a != vec[c].b &&  a.b != vec[c].a && a.b != vec[c].b ){
        return;
    }

    if(pis.size()> z.b){
        return;
    }

    if( c>= vec.size()){
        return;
    }
    
    

    for(int i=0; i<vec.size(); i++){
        pis.push(vec[i]);
        ar(z,vec[i], c++,vec);
        pis.pop();
    }



}





int main(){
    int n;
    int m;
    cin>> n>> m;
    vector<nodo> vec(m);

    for(int i=0; i<m; i++){
        cin>> vec[i].a;
        cin>> vec[i].b;
        if( vec[i].a==1 || vec[i].b== 1){
            v2.push_back(i);
        }
        
    }

    int o;
    cin>>o;
    nodo actu;
    nodo z;

    for(int i=0; i<o; i++){
        cin>> actu.a;
        cin>> actu.b;
        j=0;
        z= actu;
        for(int k=0; k<v2.size(); k++){
            pis.push(vec[i]);
            ar(z,vec[i], 0,vec);
        }

        if( j>= 1){
            cout<< 1<<"\n";
        }else{
            cout<< 0<<"\n";
        }
        j=0;
        if( pis.empty()== true){
            continue;
        }else{
            while( !pis.empty()){
                pis.pop();
            }
        }


    }

    return 0;
}