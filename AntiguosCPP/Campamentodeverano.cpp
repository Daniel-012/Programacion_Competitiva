#include<iostream>

using namespace std;

int main(){
    int n;
    cin>> n;

    if(n%3==0){
        cout<< "Amarillo";
    }else if(n%3==1){
        cout<< "Rojo";
    }else{
        cout<< "Azul";
    }


    return 0;
}