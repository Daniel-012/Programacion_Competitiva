#include<iostream>

using namespace std;

void f(int n ){
    unsigned long long int a= 1;
    unsigned long long int b= 1;
    unsigned long long int c= 2;
    unsigned long long int d= 4;
    if( n==1){
        cout<< 1;
    }else if( n== 2){
        cout<< a<<" "<< b;
    }else if( n== 3){
        cout<< a<<" "<< b<<" "<< c<<" ";
    }else{
        cout<< a<<" "<< b<<" "<< c<<" ";
        for(int i= 4; i<=n; i++){
            d= c+b+a;
            a=b;
            b=c;
            c= d;
            cout<< d<< " ";

        }
    }




}










int main(){
    int n;
    cin>> n;
    f(n);



    return 0;
}