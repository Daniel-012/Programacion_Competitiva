#include<iostream>

using namespace std;

int main(){
    long int n;
    long int x;
    long int p;
    long int c=0;

    cin>> n;
    cin>> p;

    while(n!=1){
        cin>>x;
        if( x<= p){
            c++;
        }
        n--;
    }
    cout<< c;




    return 0;
}