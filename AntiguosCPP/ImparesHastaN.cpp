#include<iostream>

using namespace std;

int  main(){
    long long int n;
    long long int s=0;
    cin>> n;
    for( long long int i=1; i<n; i++){
        if( i%2 != 0){
            s=s+i;
        }
    }

    cout<<s;

    return 0;
}