#include<iostream>

using namespace std;

long long int f(long long int x){
    if( x <= 5){
        return 1;
    }else{
        return f(x-2)*5;
    }
}





int main(){
    int n;
    cin>> n;
    cout<< f(n);


    return 0;
}