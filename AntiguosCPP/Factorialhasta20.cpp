#include<iostream>

using namespace  std;

unsigned long long int factorial(unsigned long long int n){
    if(n<0) return 0;
    else if ( n>1 ) return n*factorial(n-1);
    return 1;
}



int main(){
    unsigned long long int n;
    cin>> n;
    cout<< factorial(n);
    return 0;
}