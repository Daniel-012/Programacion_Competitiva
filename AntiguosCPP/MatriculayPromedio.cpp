#include<iostream>
#include<string>

using namespace std;

int main(){
    float x;
    float sum=0;
    string mat;
    cin>> mat;
    for(int i=0; i<5; i++){
        cin>> x;
        sum= sum + x;
    }

    cout<<mat<< " "<< sum/5;


    return 0;
}