#include<iostream>

using namespace std;

int main(){
    int x;
    int s=0;
    cin>> x;

    while( x != 0){
        s=s+x;
        cin>>x;

    }
    cout<<s;
    return 0;
}