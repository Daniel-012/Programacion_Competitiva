#include<iostream>

using namespace std;

int main(){
    long int n;
    cin>> n;
    if( n>= 18){
        cout<< "Adelante, pase usted.";
    }else{
        cout<< "No se te permite entrar.";
    }


    return 0;
}