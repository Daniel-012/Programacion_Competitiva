#include<iostream>

using namespace std;

int main(){
    int n;
    int x;
    cin>> n;
    long int s=0;
    for(int i=0; i<n; i++){
        cin>> x;
        if( x>=1 && x<=2){
            s=s+410;
        }else if( x>=3 && x<=5){
            s=s+530;
        }else if( x>=6 && x<=8){
            s=s+650;
        }else if( x>=9 && x<=12){
            s=s+790;
        }
    }

    cout<< s;


    return 0;
}