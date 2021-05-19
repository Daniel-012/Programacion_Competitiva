#include<iostream>
#include<iomanip>

using  namespace std;

int main(){
    double p;
    double d;
    cin>> p>> d;
    if( p==d){
        cout<<"Cabal Casero";
    }else if( p> d){
        cout<< "Faltan "<< fixed<<setprecision(2)<<p-d<< " Bs.";
    }else{
        cout<< "Hay "<< fixed<<setprecision(2)<<d-p<< " Bs. de cambio";
    }





    return 0;
}