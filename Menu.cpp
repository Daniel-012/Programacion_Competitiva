#include<bits/stdc++.h>

using namespace std;

int main(){
    long int n;
    long int m;
    cin>> n>> m;
    long int l;
    long int x;
    cin>> x;
    for(int i=0; i<x; i++){
        cin>> l;
        if( l%n== 0){
            cout<< m*(n-(n)) + ( l+n-1)/n<<" ";
        }else
        {
            cout<< m*(n-(l%n)) + ( l+n-1)/n<<" ";
        }
        
        
    }
    

    return 0;
}