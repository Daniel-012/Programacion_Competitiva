#include<iostream>

using namespace std;

int main(){
    int p;
    int s;
    int r;
    int d=1;

    cin>> p>> s>> r;
    int sum= s;

    while( sum < p){
        sum= sum + s;
       
        sum= sum- r;
        d++;
    }


    cout<< d;


    return 0;

}