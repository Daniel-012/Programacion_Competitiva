#include<iostream>

using namespace std;

int main(){
    long int n;

    cin>> n;
    cout<< n<< endl;;

    for( int i= n/2; i>=1; i--){
        if( n%i == 0){
            cout<< i<< endl;
        }
    }


    return 0;
}