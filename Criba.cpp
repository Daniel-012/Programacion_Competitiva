#include<iostream>

using namespace std;

bool esprimo( long long int n){
    if( n==1){
        return false;
    }else{
    for( long long int i=2 ; i<=n/2; i++){
        if( n%i==0){
            return false;
        }
    }
    return true;
    }
}



int main(){
    long long int n;
    long long int x;
    cin>> n;
    for(long long int i=0; i<n; i++){
        cin>> x;
        if(esprimo(x)){
            cout<<"SI"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}