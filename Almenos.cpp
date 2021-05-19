#include<iostream>
#include<cmath>

using namespace std;

long long int numero( int n){
    int i=0;
    for(long long int j=1; j<= n/2; j++  ){
        if( n%j==0){
            i++;
        }

    }
    return i+1;

}



int main(){
    int n;
    cin>> n;

    int b=n;

    while( numero( b) != n){
        b++;  
    }


    cout<< b ;

    return 0;
}
