#include<iostream>

using namespace std;

int main(){
    int  n;
    cin>> n;

    if( n/500!=0){
    cout<<n/500<<",500 ";
    n=n-500*(n/500);
    }
    if( n/200!=0){
    cout<<n/200<<",200 ";
    n=n-200*(n/200);
    }
    if( n/100!=0){
    cout<<n/100<<",100 ";
    n=n-100*(n/100);
    }
    if( n/50!=0){
    cout<<n/50<<",50";
    }




    return 0;
}