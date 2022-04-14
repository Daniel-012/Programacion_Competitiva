#include<iostream>

using namespace std;

int main(){
    int n;
    cin>> n;

    if (n>=0 && n<7){
        cout<< "Acido";
    }else if(n==7){
        cout<<"Neutro";
    }else if(n>7 && n<=14){
        cout<< "Base";
    }else{
        cout<<"Are you kidding me?";
    }

    return 0;
}