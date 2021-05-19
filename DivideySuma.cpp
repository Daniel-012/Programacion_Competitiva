#include<iostream>

using namespace std;
int main(){

    int n;
    int r=0;
    int s=0;
    cin>> n;

    for (int i=0; i<=n; i++){
        r=n/i;
        s=s+r;


    }


    cout<< s;





    return 0;
}