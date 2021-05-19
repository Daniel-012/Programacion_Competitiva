#include<iostream>

using namespace std;

long long int v[256];

long long int fibo(long long int n){
    if(v[n] !=0 ){
        return v[n];
    }if( n==0){
        return 0;
    } if(n== 1){
        return 1;
    }
    v[n]= fibo(n-1)+fibo(n-2);
    return v[n];

}



int main(){
    long long int m;
    for(m=0; m< 256; m++){
        cout<<fibo(m)<<endl;
    }
    


    return 0;
}