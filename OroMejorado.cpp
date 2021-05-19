#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    long int b;
    long int suma = 0;
    cin>> n>> b;
    vector<int>vec(n);
    int i;
    for(i=0; i<n; i++){
        cin>> vec[i];
    }
    sort( vec.begin(), vec.end());

    int sumi=0;
    int sumaminima=0;
    n--;
    while(sumi< b){
        sumi= sumi + vec[n];
        n--;
    }
    int minimo= 1000000;
    sumi= sumi- vec[n+1];
    n= n+1;
    for(i=0; i<=n; i++){
        if( b-vec[i]+sumi<= minimo){
            minimo= vec[i]+sumi-b;
        }
    }


    cout<< minimo;


    return 0;
}