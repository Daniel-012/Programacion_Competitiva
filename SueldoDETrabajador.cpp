#include<iostream>


using namespace std;

int main(){
    float s;
    cin>> s;
    if( s< 1000){
        cout<< (s*.15)+s;
    }else{
        cout<< (s*.12)+ s;
    }





    return 0;
}