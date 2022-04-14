#include<iostream>
#include<cmath>

using namespace std;

int main(){
    long long int n;
    cin>> n;
    long double x= 0.5*((log(2*3.1416)-2*n+log(n)*(1+2*n))/log(10));
    long long int z= x;
    double res= x-z ;
    cout<< n<<"! tiene "<<z+1<<" digitos";

    return 0;
}