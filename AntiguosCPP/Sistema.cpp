#include<iostream>

using namespace std;

int main(){
    float a1;
    float b1;
    float c1;
    float a2;
    float b2;
    float c2;

    float x;
    float y;

    cin>> a1>>b1>> c1>> a2>> b2>> c2;

    float q=  a2*a1- a1*a2;

    float f= a2*b1- a1*b2;

    float d= a2*c1 - a1* c2;

    x= ( c1- ( b1*( d/f)))/ a1;

    cout<< x;

    y= d/f;

    cout<<" ";

    cout<< y;



return 0;
}
