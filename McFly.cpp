#include<bits/stdc++.h>

using namespace  std;

typedef unsigned long long int lli;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    lli x;
    lli b=0;
    lli c=0;
    bool g=false;
    cin>> x;
    lli i=0;
    for( i=0; b<x; i++){
        b= pow(2, i);
        if( b> x){
            break;
        }
        if(b==x){
            cout<<i;
            g=true;
            break;
            
        }

    }
    if(g==false){
        cout<<i-1; 
    }
   


    return 0;
}