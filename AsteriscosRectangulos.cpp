#include<iostream>

using namespace std;

int main(){
    int n;
    int x;
    cin>> n>> x;
    for(int i=0; i<n; i++){
    for(int j=1; j<=x; j++){
        cout <<"*";
    }
    cout<<endl;
    }
    


    return 0;
}