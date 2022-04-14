#include<iostream>

using namespace std;

long long int f(long long int n){
    long long int a=0;
    long long int b= 1;
    long long int c=1;
    for(long long int i=1; i<n; i++){
        a=b;
        b= c;
        c= a+b;
    }

    return  c;
}





int main(){
    long long int n=0;
    cin>> n;
    cout<< f( n);




    return 0;
}