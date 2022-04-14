#include<bits/stdc++.h>

using namespace std;

int main(){
    long int c=0;
    long int n;
    long int x;
    long int actu;

    cin>> n;
    cin>> x;


    for(long int i=0; i<n-1; i++){
        cin>> actu;
        if( actu<= x){
            c++;
        }
    
    }

    cout<< c;


    return 0;
}