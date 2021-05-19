#include<iostream>

using namespace std;

long long int primero(unsigned long long int x){
    long long int suma=0;
    while( x != 0){
        suma= suma+  x%10;
        x= x/10;
    }
    return suma;
}




int main(){
    long int n;
    unsigned long long int x;
    unsigned long long int y;
    cin>> n;
    for( long int i=0; i<n; i++){
        cin>> x>> y;
        unsigned long long int suma = primero( x);
        while( suma>=10){
            suma = primero( suma );
        }
        suma= suma* y;
        if( suma<= 9){
            cout<< suma<< endl;
        }else{
            while( suma>=10){
                suma = primero( suma );
            }
            cout<<suma<<endl;
        }





    }




    return 0;
}