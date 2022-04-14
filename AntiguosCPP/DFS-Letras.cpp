#include<bits/stdc++.h>

using namespace std;



void combina( vector<char>& letras  ){
    for(int i=0; i< letras.size(); i++){
        
        for(int j=0; j<letras.size() ; j++){
            if( i!= j){
                for(int k=0; k< letras.size(); k++){
                    if( j!= k && i!= k){
                        cout<< letras[i]<<" "<< letras[j]<<" "<< letras[k]<<"\n";
                    }
                }
            }  
        }
    }
    

}





int main(){
    int n; 
    cout<< "Cuantas Letras Son? ";
    cin>> n;
    vector<char> vec(n);    
    cout<< "Ingreselas: ";
    for(int i=0; i<n; i++){
        cin>> vec[i];
    }

    cout<< "Las Combinaciones Son: "<<"\n";
    
    combina(vec);
    
    


    return 0;
}