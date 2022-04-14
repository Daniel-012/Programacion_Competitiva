#include<iostream>


using namespace std;

void suma( int n){
    int sum=0;
    int x;
    for( int i=0; i<n; i++){
        cin>> x;
        sum= sum+x;
    }
    cout<<sum;
}

void resta( int n){
    int sum=0;
    int x;
    cin>> x;
    sum= x;
    for( int i=0; i<n-1; i++){
        cin>> x;
        sum= sum-x;
    }
    cout<<sum;
}

void multiplicacion( int n){
    int sum=0;
    int x;
    cin>> x;
    sum= x;
    for( int i=0; i<n-1; i++){
        cin>> x;
        sum= sum *x;
    }
    cout<<sum;
}

void divicion( int n){
        int sum=0;
    int x;
    cin>>x;
    sum=x;
    for( int i=0; i<n-1; i++){
        cin>> x;
        sum= sum/x;
    }
    cout<<sum;
}








int main(){
    int o;
    int n;
    cin>> o>> n;
    if( o==1){
        suma(n);
    }else if ( o==2){
        resta(n);
    }else if( o==3){
        multiplicacion(n);
    }else if( o==4){
        divicion(n);
    }


    return 0;
}