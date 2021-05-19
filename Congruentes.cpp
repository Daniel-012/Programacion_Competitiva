#include<iostream>

using namespace std;

int main(){
    int n;
    int a;
    int b;
    int x;
    int c=0;
    int mid;
    cin>> a>> b;
    mid=a%b;
    cin>> n;
    for( int i=0; i<n; i++){
        cin>>x;
        if( x%b== mid){
            c++;
        } 
    }

    cout<< c;

    return 0;
}