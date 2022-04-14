#include<iostream>

using namespace std;

int main(){
    int n;
    int x;
    long long int min=10000000000;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>> x;
        if(x<=min){

            min=x;
        }

    }

    cout<<min;
    
    return 0;
}