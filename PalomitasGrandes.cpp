#include<iostream>

using namespace std;

int main(){
    int y;
    int x;
    cin>> y>> x;

    int n= x-y;
    if( n% 4 == 0){
        cout<< "Palomitas grandes";
    }else if( n% 2 == 0){
        cout<<"Palomitas medianas";
    }else{
        cout<<"Nada";
    }




    return 0;
}