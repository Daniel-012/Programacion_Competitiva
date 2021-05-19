#include<iostream>

using namespace std;

int main(){
    long int a;
    long int b;
    cin>> a>> b;
    for(a; a<= b; a++){
        if(a%2==0){
            cout<< a<<endl;
        }
    }

    return 0;
}