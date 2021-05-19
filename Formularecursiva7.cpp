#include<iostream>

using namespace std;

long long int f( long long int n, long long int m){
    if( n< 5){
        return 20;
    }else if( n== 5){
        return f( n-2,m-2)*2;
    }else {
        return f(n-1, m-1)+2;
    }
}




int main(){
    int n;
    int m;
    cin>> n>> m;
    cout<< f( n, m);

    return 0;
}