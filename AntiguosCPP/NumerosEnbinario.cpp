#include<iostream>

using namespace std;

void binario(int n){
    if(n>=2){
        binario(n/2);
        cout<<n%2;
    }else{
        cout<< n;
    }
}



int main(){
    long int n;
    cin>> n;

    binario(n);

    return 0;
}