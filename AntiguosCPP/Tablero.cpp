#include<iostream>

using namespace std;

int main(){
    int n;
    char x;
    cin>> x>> n;

    if( x%2==0){
        if( (n+x)%2==0){
            cout<< "Salida"<<endl<<"NEGRO";
        }else{
            cout<< "Salida"<<endl<<"BLANCO";
        }
    }else{
        if( (n+x)%2==0){
            cout<< "Salida"<<endl<<"NEGRO";
        }else{
            cout<< "Salida"<<endl<<"BLANCO";
        }
        
    }


    return 0;
}