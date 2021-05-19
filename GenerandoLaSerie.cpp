#include<iostream>

using namespace std;

int main(){
    int n;
    cin>> n;
    int x=3;
    int c= 1;
    for( int i=1; i<=n; i++){
        cout<<x<<" ";
        if ( c!= x){
            c++;
        }else{
            x=x+3;
            c=1;
        }
    }



    return  0;
}