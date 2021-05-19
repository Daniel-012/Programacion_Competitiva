#include<iostream>
#include<string>

using namespace std;

int main(){
    int n;
    int c=0;
    string cadena;
    cin>>n;
    cin>> cadena;
    for( int i=0; i<cadena.size(); i++){
        if( cadena[i] == 'o'){
            c++;
        }
    }
    if( c<=n){
        cout<< "Que guapo mi loro, mi loro de oro";
    }else{
        cout<<"Chales... :'(";
    }

    return 0;
}