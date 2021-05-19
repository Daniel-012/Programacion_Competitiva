#include<bits/stdc++.h>

using namespace std;

vector<int> abc(26);
string abe= "abcdefghijklmnopqrstuvwxyz";



int main(){
    string pala;
    cin>> pala;

    for(int i=0; i<pala.size(); i++){
        for(int j=0; j< abe.size(); j++){
            if( pala[i]== abe[j]){
                abc[j]++;
            }
        }

    }

    for(int i=0; i<abc.size(); i++){
        cout<< abc[i]<<" ";
    }
    cout<<"\n";

    for(int i=0; i<abc.size(); i++){
        if( abc[i] != 0){
            cout<< "La letra "<<abe[i]<<" aparece "<<abc[i]<<" veces"<<"\n";
        }
    }






    return 0;
}