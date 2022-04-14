#include<iostream>

using namespace std;

int main(){
    int n;
    int res;
    int mod;
    cin>> mod;
    for( int i=0; i<mod; i++){
    cin>> n;
    int c=0;
    while( n!=0){
        if( n%2 == 1){
            c++;
        }
        n= n/2;

    }

    cout<< c<< endl;
    }
    return 0;
}