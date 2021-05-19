#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    if( n<0){
        cout << "Muy Frio";
    }else if( n>=0 && n<=10){
        cout << "Frio";
    }else if( n>=11 && n<=20){
        cout << "Templado";
    }else if( n>=21 && n<=25){
        cout << "Calido";
    }else {
        cout<<"Muy Calido";
    }


    return 0;
}