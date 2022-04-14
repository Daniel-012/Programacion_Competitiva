#include<iostream>

using namespace std;

int main(){
    int n;
    int x;
    int max=0;
    cin>> n;
    while( n!=0){
        cin>> x;
        if( x>= max){
            max=x;
        }

        n--;
    }

    cout<<max;

    return 0;
}