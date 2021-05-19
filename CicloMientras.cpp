#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int suma=0;
    int x;

    while( cin>> x){
        if( x==0){
            break;
        }
        suma+= x;
    }
    cout<<suma;


    return 0;
}