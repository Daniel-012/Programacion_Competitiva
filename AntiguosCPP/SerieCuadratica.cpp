#include<iostream>

using namespace std;

int main(){
    long long int inicio;
    long long int fin;
    cin>> inicio>> fin;

    for( int i=inicio; i<=fin; i++){
        cout<<i<<" * "<< i<<" = "<<i*i<< endl;
    }

    return 0;

}