#include<iostream>
#include<string>

using namespace std;

int main(){

    string palabra;

    getline    ( cin, palabra);

    if( palabra[0]=='S' && palabra[palabra.size()-1]== 'S'){
        cout<< "SI";
    }else{
        cout<< "NO";
    }

    return 0;
}