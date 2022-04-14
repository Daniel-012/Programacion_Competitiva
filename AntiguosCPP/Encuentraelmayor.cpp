#include<iostream>

using namespace std; 

int main(){
    int may=-1000;
    int n;
    int x;
    cin>> n;
    for( int i=0; i<n; i++){
        cin>> x;
        if( x>= may){
            may=x;
        }

    }

    cout<< may<< endl;

    return 0;
}