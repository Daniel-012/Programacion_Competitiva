#include<bits/stdc++.h>

using namespace std;

int caras, tiros;

void  busca(int c, vector<int> vec){
    if( c>= tiros){
        return ;
    }

    for(int i=1; i<=caras; i++){
        vec.push_back(i);
        busca(c+1, vec);
        if( vec.size()== tiros){
            for(int j=0; j<vec.size(); j++){
            cout<<vec[j];
        }
        cout<<"\n";
        }
        
        vec.pop_back();

    }


}


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    cin>> caras>> tiros;
    vector<int> vec;
    busca(0, vec);

    return 0;
}