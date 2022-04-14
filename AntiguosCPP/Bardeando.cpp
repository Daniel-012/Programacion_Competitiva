#include<iostream>

using namespace std;

int main(){
    int p;
    int n;
    int s;
    int x;
    int sum=0;
    cin>> p>> n;
    for( int i=0; i<n; i++){
        cin>> x;
        sum=sum+x;
    }
    if( sum>= p){
        cout<<0;
    }else{
        cout<< p-sum;
    }

    return 0;
}