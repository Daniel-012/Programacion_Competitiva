#include<iostream>

using namespace std;

int main(){
    int a;
    int b;
    cin>> a>> b;
    if( a==b){
        cout<<"CHIPOTAZO";
    }else{
        if( a== 5 && b== 0 || a== 0 && b== 2 || a== 2 && b== 5  ){
            cout<<"Juanito";
        }else{
            cout<<"Pepito";
        }
    }



    return 0;
}