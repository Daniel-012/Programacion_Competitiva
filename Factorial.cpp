#include<iostream>

using namespace std;

int main(){
    int n;
    int m=0;
    cin>> n;

    if( n== 1 || n== 0){
        cout<< 1;
    }else{

    m=n*(n-1);

    for( int i=n-2; i>=1; i--){
        m=m*i;
    }
    cout<< m;

    }

    return 0;
}