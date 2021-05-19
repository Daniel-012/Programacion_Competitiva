#include<iostream>

using namespace std;

int main(){
    int a=0;
    int d=0;
    int h=0;
    int m=0;
    int r=0;
    long long int n;
    cin>> n;
    a= n/31536000 ;
    r= n - a*31536000;
    d= r/86400 ;
    r= r- d*86400;
    h= r/3600 ;
    r= r - h*3600;
    m= r/60 ;
    r= r- m*60;

    cout<<a<<" "<< d <<" " << h<<" "<< m<< " "<< r;
    return 0;
}