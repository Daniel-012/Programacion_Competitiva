#include<iostream>

using namespace std;

int main(){
    long long int a;
    long long int d;
    cin>> a>> d;
    long long int n;
    long long int s=1;
    n=a-d;
    if( n<0){
        n=n*-1;
    }
    if( n<=1){
        n=1;

    for(long long int i=1; i< a; i++ ){
        n=n+2;
        s=s+n;

    }
    cout<< s<< " ";
    s=2;
    n=2;

    for(long long int i=1; i< d; i++ ){
        n=n+2;
        s=s+n;
    }
    cout<< s;
    
    }


    return 0;
}