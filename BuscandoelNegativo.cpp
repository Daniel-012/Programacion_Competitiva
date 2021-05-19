#include<iostream>

using namespace std;

int main(){
    int s=0;
    int x=0;
    while( x!=-1){
        cin>> x;
        if( x>=10 && x<=100){
            s=s+x;
        }
    }

    cout<< s;

    
    return 0;
}