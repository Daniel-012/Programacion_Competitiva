#include<iostream>

using namespace std;

int main(){
    int c ;
    cin>> c;
    if( c>=0 && c<=5 ){
        cout<< "No acredita";
    }else if( c==6){
        cout<< "Suficiente";
    }else if( c==7){
        cout<< "Regular";
    }else if( c==8){
        cout<< "Bien";
    }else if( c==9){
        cout<< "Muy bien";
    }else{
        cout<<"Excelente";
    }





    return 0;
}