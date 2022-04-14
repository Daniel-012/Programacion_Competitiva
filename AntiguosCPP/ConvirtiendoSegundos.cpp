#include<iostream>


using namespace std;

int main(){
    long long int n;
    cin>> n;
    
    cout<< "Horas: "<< n/3600<<" ";
    n= n%3600;
    cout<< "Minutos: "<< n/60<<" ";
    n=n%60;
    cout<< "Segundos: "<<n;



    return 0;
}