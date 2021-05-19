#include<iostream>
#include<cmath>

using namespace std;

int main(){
    long int a;
    long int b;
    cin>> a>> b;
    long int c=0;

    while ( b < a){
        b= pow( b, 2);
        c++;
    }
    if( b== a){
        cout<<  c+1;
    }else{
        cout<<  c;
    }
    return 0;
}