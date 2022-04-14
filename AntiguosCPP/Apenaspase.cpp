#include<iostream>

using namespace std;

int  main(){
    float a;
    float p;
    float x;
    int n;
    cin>> a;
    cin>> n;
    for( int i=0; i<n; i++){
        cin>> x;
        p=p+x;
    }
    if( p/n> a){
        cout<<"Presume";
    }else{
        cout<<"Ladra";
    }



    return 0;
}