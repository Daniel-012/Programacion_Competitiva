#include<iostream>
#include<cmath>

using namespace std;

bool esprimo(long long int n){
    for(long long int i=2; i<= sqrt(n); i++){
        if( n%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    long long int n;
    long long int c=0;
    cin>> n;

    for( long long int i=2; i<=n; i++ ){
        if( esprimo(i)){
            c++;
        }
    }

    cout<<c;



    return 0;
}