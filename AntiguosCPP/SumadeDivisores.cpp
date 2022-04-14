#include<iostream>

using namespace std;

int main(){
    long long int n;
    long long int s=0;
    cin>> n;
    for(int i=1; i<n; i++){
        if(n%i==0){
            s=s+i;
        }
    }

    cout<< s;
    return 0;
}