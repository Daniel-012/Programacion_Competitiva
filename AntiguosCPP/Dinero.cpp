#include<bits/stdc++.h>

using namespace std;

int main(){

    unsigned long long int maxi= 0;
    unsigned long long int m;
    unsigned long long int x;

    int n;

    cin>> n>> x;

    for(int i=0; i<n; i++){
        cin>> m;
        if( m>= maxi){
            maxi= m;
        }
    }

    cout<< maxi;


    return 0;
}