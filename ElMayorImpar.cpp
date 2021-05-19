#include<iostream>

using namespace std; 

int main(){
    int n; 
    int del;
    long int max= -100000000;
    for(int i=0; i<5; i++){
        cin >> n;
        if( n%2!=0 && n>=max){
            max=n;
            del= n;
        } 
    }
    cout<< del;

    return 0;
}