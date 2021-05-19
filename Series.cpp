#include<iostream>

using namespace std;

int main(){
    int a;
    int b;
    long int s=0;
    cin>> a>>b;
    for( int i=1; i<=a; i++){
        s=s+(i*b);
    }
    cout<<s;


    return 0;
}