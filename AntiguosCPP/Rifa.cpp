#include<iostream>

using namespace std;


int main(){
    long long int x=0;
    long long int n=0;
    long long int suma=0;
    cin>> n;
    for( int i=0; i<n; i++){
        cin>> x;
        suma = suma +(  (x*(x+1))/ 2);
    }


    cout<<suma;


    return 0;
}