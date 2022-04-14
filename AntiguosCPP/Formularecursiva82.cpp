#include<iostream>

using namespace std;

long long int vec[100];

long long int f( long long int n){
    if( n<4){
        return 10;
    }else if(vec[n]!=0){
            return vec[n];
    }else{
        vec[n]= f( n-2 ) + f( n-4 ) + 30;
        return f( n-2 ) + f( n-4 ) + 30;
        
    }
}






int main(){
    long long int n;
    cin>> n;
    cout<< f( n);




    return 0;
}