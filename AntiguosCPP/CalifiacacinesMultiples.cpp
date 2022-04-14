#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    double a;
    double b;
    int n=1;

    do{
        cin>> a;
        while( a<0 || a>10){
            cout<<"Calificacion invalida"<<endl;
            cin>> a;
        }
        cin>> b;
        while( b< 0 || b>10){
            cout<<"Calificacion invalida"<<endl;
            cin>> b;
        }
        cout<<"Promedio = "<< fixed<<setprecision(2)<<(a+b)/2<<endl;
        cout<< "Nuevo Calculo (1-Si 2-No)?"<<endl;
        cin>> n;
        while( n>=3){
            cout<< "Nuevo Calculo (1-Si 2-No)?"<<endl;
            cin>> n;
        }
    }
    while( n== 1);



    return 0;
}