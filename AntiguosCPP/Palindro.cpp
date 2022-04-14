#include<bits/stdc++.h>

using namespace std;

bool espalindro(string& x){
    int j=x.size()-1;
    for(int i=0 ; i<x.size(); i++){
        if( x[i]!= x[j]){
            return false;
        }
        j--;
    }
    return true;
}




int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    string x;

    cin>> n;

    for(int i=0; i<n; i++){
        cin>>x;

        if(espalindro(x)){
            cout<<"P\n";
        }else{
            cout<<"NP\n";
        }

    }


    return 0;
}