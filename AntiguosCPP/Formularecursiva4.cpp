#include<iostream>

using namespace std;

long long int funcion( long long int x){
    if( x<= 3){
        return 1;
    }else{
        return funcion(x-1 ) + funcion( x-2) + funcion( x-3);
    }

}






int main(){
    long long int n;
    cin>> n;
    cout<< funcion( n);


    return 0;
}