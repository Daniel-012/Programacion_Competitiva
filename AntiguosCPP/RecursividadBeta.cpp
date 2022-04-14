#include<bits/stdc++.h>

using namespace std;

vector<long long int > vec(60);


long long int f( long long int n){
    if(vec[n]!=0){
        return vec[n];
    }
    if( n<= 15){
        cout<< n+n*3<<"\n";
        return n+n*3;
    }
    else{
        vec[n]= f(n-10)*5;
        cout<< vec[n]<<"\n";
        return vec[n]  ;
    }
}





int main(){
    int n;

    cin>> n;
    
    f(n);


    return 0;
}