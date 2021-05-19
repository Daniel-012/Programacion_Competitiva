#include<iostream>

using namespace std;

int main(){
    int n;
    int max=0;
    int x;
    cin>>  n;
    while( n!=0){
        cin>> x;
        if( x>=max){
            max=x;
        }
        n--;
    }
    cout<<max;


    return 0;
}