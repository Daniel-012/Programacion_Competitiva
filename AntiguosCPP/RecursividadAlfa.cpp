#include<bits/stdc++.h>

using namespace std;

vector<long long int > vec(160);


long long int f( long long int n){
    if(vec[n]!=0){
        return vec[n];
    }
    if( n< 50){
        return 2;
    }
    else{
        vec[n]= f(n-1)+ (f(n-5)* 2);
        return vec[n]  ;
    }
}





int main(){
    int n;

    cin>> n;
    
    cout<< f(n);


    return 0;
}