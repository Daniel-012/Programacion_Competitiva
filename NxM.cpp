#include<bits/stdc++.h>

using namespace std;

int main(){
    //ios_base::sync_with_stdio(0);
    //cin.tie(0);

    long int c=0;
    long long int n;
    long long int m;
    long long int maxi;
    long long int mini;

    cin>> n>> m;

    if(n>= m){
        maxi= n;
        mini=m;
    }else{
        maxi=m;
        mini= n;
    }

    c= maxi/mini;
    n= maxi%mini;
    

    while( n!= 0){
        m= maxi;
        maxi= mini;
        
        mini= m%mini;
        n= maxi%mini;
        
        c+= maxi/mini;
    }    


    cout<<c;



    return 0;
}