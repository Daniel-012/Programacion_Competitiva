#include<iostream>
#include<string>

using namespace std;

int main(){
    string oracion;
    char x;

    while( x != 10){
        cin>> x;
        oracion.push_back(x);
    }

    cout>>oracion;





    return 0;
}

