#include<iostream>

using namespace std;

int main(){
    int n;
    cin>> n;
    int c=0;
    char x;
    for(int i=0; i<n; i++){
        cin>> x;
        if( x== 'M'){
            c++;
        }
    }
    cout<< c;
    return 0;
}