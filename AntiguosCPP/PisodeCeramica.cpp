#include<iostream>

using namespace std;

int main(){
    long long int n;
    cin>> n;
    long int c= (n-3)/2;
    long int b=(c*(c+1))-c ;
    cout<<b*4 <<" "<< n*n-(b*4);


    return 0;
}