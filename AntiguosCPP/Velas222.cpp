#include<iostream>

using namespace std;

int main(){
    int r;
    int t;
    int suma=0;
    int divicion;
    int contador=0;

    cin>> t>> r;
    contador = t;
    suma = r;
    int modulo;
    int x=0;
    while (  suma> r){
        if ( x==0){
            divicion= t/r;
            modulo= t%r;
            contador=contador+ divicion ;

            suma= divicion + modulo ;
            x++;
        }else{

        modulo= divicion % r;

        divicion = (divicion+modulo)/r;


        contador=contador+ divicion ;


        suma= divicion + modulo ;

        }

    }



    cout<< contador;

    return 0;
}