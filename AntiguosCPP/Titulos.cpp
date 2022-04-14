#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    vector<string> vec;
    string palabra;
    int maxi=0;

    getline(cin, palabra);
    vec.push_back(palabra);
    if(palabra.size()>= maxi){
            maxi= palabra.size();
    }

    while (vec[vec.size()-1] != "#"){
        getline(cin, palabra);
        vec.push_back(palabra);
        if(palabra.size()>= maxi){
            maxi= palabra.size();
        }
    }

    if( maxi>= 36){
        maxi= 36;
    }

    int n= vec.size()-1;
   
    int m= n*2 +1;
    n= vec.size();
    for(int i=0; i<m; i++){
        cout<<"-";
    }
    cout<<"\n";

    int talla=0;

    for(int i=0; i<maxi; i++){
        for(int j=0; j<n; j++){
            cout<<"|";
            talla= vec[j].size();
            if(i<talla ){
                if(vec[j][i]== '#' ){
                    cout<<" ";
                }else{
                    cout<< vec[j][i];
                }
                
            }else{
                cout<<" ";
            }
        }
        cout<<"\n";

    }



    for(int i=0; i<m; i++){
        cout<<"-";
    }
    return 0;
}