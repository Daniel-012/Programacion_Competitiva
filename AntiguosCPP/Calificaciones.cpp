#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    float x;
    float s=0;

    for (int i=0; i<7; i++){
        cin >> x;
        s=s+x;

    }

    cout<< fixed<< setprecision(1)<< s/7;


    return 0;
}