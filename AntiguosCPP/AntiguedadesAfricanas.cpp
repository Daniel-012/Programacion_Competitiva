#include<iostream>

using namespace std;

int main(){
    int n;
    int s;
    int e;
    int o;
    cin>> n>> s>> e>> o;
    if( (n*s*e*o) %2 == 0){
        cout<< "Dinosaurio";
    }else{
        cout<<"No Dinosaurio";
    }

    return 0;
}