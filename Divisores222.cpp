#include<iostream>
#include<string>

using namespace std;

int cantidad( int s){
    int c=0;
    for( int i=1; i<=s; i++){
        if( s%i==0){
            c++;
        }
    }
    return c;
}


int main(){
    string cadena;
    int s=0;

    cin>> cadena;

    for(int i=0; i<cadena.size(); i++){
        if( cadena[i]>90){
            s=s+cadena[i]-32;
        }else{
        s=s+cadena[i];
        }
    }


    cout<< cantidad(s);



    return 0;
}