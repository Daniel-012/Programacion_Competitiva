#include<iostream>

using namespace std;

int main(){
    int n;
    cin>> n;
    if( n<=20){
        cout<<1;
    }else{
        cout<<(n%5)+5+n;
    }



    return 0;
}