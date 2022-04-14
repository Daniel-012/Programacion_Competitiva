#include<bits/stdc++.h>

using namespace std;


vector<int> vec(100000);

int suma=0;
int j=0;
int personas=0;
int n;


int cuenta(int& pos){
    j= pos;
    j++;
    suma= 0;
    personas=0;
    

    while (suma<150 && j<n){
        suma += vec[j];
        if( suma<150){
            personas++;
        }
        j++;
    }

    j= pos;
    suma= 0;


    while (suma<150 && j>=0){
        suma += vec[j];
        if( suma<150 ){
            if(vec[j] != 0){
                personas++;
            }
            
        }
        j--;
    }
    
    return personas;

}




int main(){
    
    cin>> n;
    vec[0]=0;
    for(int i=1; i<n; i++){
        cin>> vec[i];
    }



    for(int i=0; i<n; i++){
        cout<< cuenta(i)<<" ";
    }


    return 0;
}