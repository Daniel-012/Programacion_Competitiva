#include<iostream>

using namespace std;

int main(){
    int a=1;
    int b=1;
    int c;
    int n;
    cin>> n;
    if( n==1 ||n==0){
        cout<<1;
    }else{
    for(int i=2; i<=n;i++){
        c=a+b;
        a=b;
        b=c;

    }
    cout<<c;
    }

    return 0;
}