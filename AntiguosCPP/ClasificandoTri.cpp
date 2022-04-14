#include<iostream>


using namespace std;

int main(){
    int a;
    int b;
    int c;
    cin>> a>> b>> c;
    if( a== 90 || b== 90 || c== 90){
        cout<<"RECTANGULO";
    }else if ( a== b && a==c){
        cout<<"EQUILATERO";
    }else if( a== b || a== c || c==b){
        cout<<"ISOSCELES";
    }else{
        cout<< "ESCALENO";
    }




    return 0;
}