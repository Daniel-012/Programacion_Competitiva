#include<iostream>

using namespace std;

int main(){
    int n;
    int c=0; 
    int p;
    cin>> n>> p;
    while( n>= 1){
        c=c+n;
        n=n/p;
    }

    cout<<c;

    return 0;
}