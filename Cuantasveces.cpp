#include<iostream>

using namespace std;

int main(){
    char x;
    int c=0;
    string palabra;

    cin >> palabra>> x;

    for(int i=0; i<palabra.size(); i++){
        if(palabra[i]== x){
            c++;
        }
    }

    cout << c;

    return 0;
}