#include<iostream>
#include<vector>
#include<cmath>

using namespace std;


/*bool recatifica( long long int n){
    long long int i=2;
    while( i<n && i<= sqrt(n)){
        if( n% i== 0){
            return false;
        }
        i++;

    }
    return true;
}*/

bool recatifica(long long int n ){
    if( n == 1 || n==4)return false;
    for( long long int x=2; x< n/2; x++){
        if( n%x == 0) return false;
    }
    return true;
}

int main(){
    long long int n;

    cin>> n;    
    
    if( recatifica(n)){
        cout<< "si es primo";
    }else{
        cout<< "no es primo";
    }

    return 0;
}