#include<bits/stdc++.h>

using namespace std;

vector<char> combinaciones;

void combina( vector<char>& leter, int pos, int tam){
    if( combinaciones.size()== tam){
        for( int j=0; j< tam; j++){
            cout<< combinaciones[j]<<" ";
        }
        cout<<"\n";
    }

    for(int i=pos; i< leter.size(); i++ ){
        combinaciones.push_back( leter[ i]);

        combina( leter, i+1, tam);

        combinaciones.pop_back();
    }




}





int main(){
    int n;
    int num;
    cout<< "DE Cuantas Letras Sera la Combinacion? ";
    cin>> n;
    cout<<"Cuantas Letras Son? ";
    cin>> num;
    vector<char> letras( num);

    cout<<"Ingrese las letras: ";


    for(int i=0; i<num; i++){
        cin>> letras[i];
    }

    cout<< "Las Combinaciones Son: "<< "\n";

    combina(letras, 0, n);





    return 0;
}