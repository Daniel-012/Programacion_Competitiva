#include<iostream>

using namespace std;

long long int f( long long int n){
    if( n<= 20){
        return 1;
    }else{
        return f(n-5)+ 5+ n;
    }
}





int main(){
    int n;
    cin>> n;
    cout<<f(n);



    return 0;
}