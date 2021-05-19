#include<iostream>

using namespace std;

int main(){
    char x=0;
    int c=0;
    while( x!='.'){
        cin>> x;
        if( x== 'A'){
            c++;
        }
    }

    cout<<c;


    return 0;
}