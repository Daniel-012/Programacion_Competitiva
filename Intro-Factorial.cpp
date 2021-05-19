#include<bits/stdc++.h>

using namespace std;

typedef unsigned long long int lli;

lli factorial(lli n){
    if( n<=1){
        return 1;
    }   

    lli lip= factorial(n-1)*n ;
    //cout<<lip;
    return lip;
}



int main(){
    //ios_base::sync_with_stdio(0);
    //cin.tie(0);
    lli n;
    cin>>n;

    cout<< factorial(n);



    return 0;
}