#include<iostream>
#include<cmath>

using namespace std;


int main(){
    long int i=1;
    long int c=0;
    long int n=0;
    long long int suma=0;

    cin>> n;

    while(c != n ){
        if( i%2 != 0 ){
            suma += i;
            c++;
        }
        i++;
    }


    cout<< suma;


    return 0;
}