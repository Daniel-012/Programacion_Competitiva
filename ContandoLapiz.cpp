#include<iostream>

using namespace std;

int main() {
    int n;
    int x;
    int l;
    int c=0;
    cin>> n>> l;

    while( n>0){
        cin>>x;
        if( x== l){
            c++;
        }
        n--;
    }


    cout<< c;


    return 0;
}
