#include<iostream>

using namespace std;

int main(){
    int x;
    int s=0;
    for(int i=0; i<5; i++){
        cin>> x;
        s=s+x;
    }

    cout<<s/5;


    return 0;
}