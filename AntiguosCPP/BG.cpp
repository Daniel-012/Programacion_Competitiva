#include<iostream>

using namespace std;

int main(){
    int n;
    int k;
    int x;
    cin>>n;
    cin>> k;
    while( n-1!=0){
        cin>> x;
        n--;
    }
    cin>> x;
    if( x== k){
        cout<<"TODOS VAMOS A MORIR";
    }else{
        cout<<"SALVADOS";
    }




    return 0;
}