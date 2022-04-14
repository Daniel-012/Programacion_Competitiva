#include<iostream>

using namespace std;

int main(){
    int r1;
    int r2;
    int c1;
    int c2;
    int d1;
    int d2;
    cin>> r1 >>r2 >>c1 >>c2 >>d1>> d2;
    int b= (( r1-c1)+d2)/2;
    int a= ((r1-d2)+c1)/2;
    int c= ((d2-c2)+r2)/2;
    int d= ((r2-c1)+d1)/2;


    cout<< a<<" "<< b<< endl<< c<<" "<< d;


    return 0;
}