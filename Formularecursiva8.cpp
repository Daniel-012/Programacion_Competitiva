#include<iostream>

using namespace std;

long long int f( long long int n){
    if( n >= 4){
        return f(n-2) + f( n-4) + 30;
        
    }else{
        return 10;
    }
}





int main(){
    long long int n;
    cin>> n;
    cout<< f(n);

    return 0;
}