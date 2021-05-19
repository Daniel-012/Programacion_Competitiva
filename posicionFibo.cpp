#include<bits/stdc++.h>

using namespace std;

int main(){
    unsigned long long int n;
    cin>> n;
    long long int i=2;

    unsigned long long int a=1;
    unsigned long long int b= 1;
    unsigned long long int c=0;
    int x=0;
        if( n== 1){
        cout<<1;
    }else{
        while( c<= n ){
            if( c==n){
                cout<< i;
                x++;
            }
            c=a+b;
            a=b;
            b=c;
            
            i++;
        }

    }
    if( x==0){
        cout<< -1;
    }

    
    
    



    return 0;
}