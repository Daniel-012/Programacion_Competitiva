#include<iostream>
#include<cmath>

using namespace std;

bool primo( long int x){

    long long int n= sqrt(x);
    for( long int i=2;i<=n; i++ ){
        if( x%i==0){
            return false;
        }
    }
    return true;
}



int main(){
    long long int n;
    long int x=0;
    cin>> n;
    if( n==1){
        cout<<3<<" "<<5;
    }else{

    while( x==0)
    if( primo(n) && primo(n+2)){
        cout<<n<<" "<<n+2;
        x++;
    }else{
        n++;
    }

    }

    return 0;
}