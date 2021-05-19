#include<iostream>

using namespace std;

long long int fi( long long int n){
    long long int a= 0;
    long long int b= 1;
    long long int c= 1;
    
    for( long int i=1; i<n; i++){
        a= b;
        b= c;
        c= a+b;
        cout<< c<< endl;
    }
    return c;
}




int main(){
    long  long int n;
    cin>> n;
    if(n== 0 ){
        cout<< 0;
    }else{
        cout<< (fi( n)) % 1000000   ;
    }


    return 0;
}