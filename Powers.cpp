#include<iostream>

using namespace std;

int main(){
    long long int n;
    long long int i=1;
    long long int c=0;
    cin>> n;

    while( i<=n  && i*i<=n){
        if(i*i<=n){
            c++;
        }
        i++;
    }


    cout<<c;




    return 0;
}