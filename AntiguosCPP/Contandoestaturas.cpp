#include<iostream>

using namespace std;

int main(){
    int c=0;
    int n;
    float x;
    
    cin>> n;

    for(int i=0; i<n; i++){
        cin>> x;
        if( x > 1.70){
            c++;
        }
    }
    cout<<"Salida"<<endl<<c;

    return 0;
}