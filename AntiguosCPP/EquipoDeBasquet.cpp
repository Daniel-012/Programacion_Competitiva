#include<iostream>

using namespace std;

int main(){
    int n;
    cin>> n;
    if( n>= 160){
        cout<<"Bienvenido al equipo";
    }else{
        cout<< "Lo siento, te faltan "<<160-n<<" cm para poder entrar al equipo";
    }




    return 0;
}