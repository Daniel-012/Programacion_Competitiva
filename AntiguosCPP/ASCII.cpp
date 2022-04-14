#include<iostream>
#include<string>

using namespace std;

int main(){
    string nombre;

    cin>> nombre;

    int i=0;

    while( i<4 && i<nombre.size()){
        int n= nombre[i];
        cout<< nombre[i]<< " ASCII value is "<< n<< endl;
        i++;
    }




    return 0;
}