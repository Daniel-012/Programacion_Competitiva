#include<iostream>
#include<string>
using namespace std;

int main(){
    long long int a;
    long long int b;
    string nom1;
    string nom2;
    cin>> nom1>> a>> nom2>>b;
    if( a> b){
        cout<<nom1;
    }else{
        cout<< nom2;
    }

    return 0;
}