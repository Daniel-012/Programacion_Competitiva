#include<iostream>

using namespace std;

int main(){
    int x;
    int y;

    cin>> x>>y;


    if(y-x>=0){
        cout   <<   y-x     ;
    }else{
        cout << x-y;
    }
    
    return 0;
}