#include<iostream>

using namespace std;

int main(){

    int p=0;
    int a=0;
    int b= 1;
    int c= 1;
    while( c<= 1000){
        a= b;
        b= c;
        c= a+b; 

        cout<<c<<" ";
    }



    return 0;
}