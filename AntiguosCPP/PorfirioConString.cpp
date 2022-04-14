#include<iostream>
#include<string>

using namespace std;

int main(){
    int  i=0;
    char x ;
    int a=0;
    int b=0;
    int c=0;
    string pala;
    string cadena;
    cin>> cadena;

    while(  i< cadena.size()){
        x=cadena[i];

        if( x== 'a'){
            a++;
        }else if( x== 'b'){
            b++;
        }else{
            c++;
        }
        if( x== 'a' && a==1){
            pala.push_back(x);
        }else if( x== 'b' && b==1){
            pala.push_back(x);
        }else if( x== 'c' && c==1){
            pala.push_back(x);
        }
        i++;
    }

    if( pala[0]=='a' && pala[1]=='b' && pala[2]=='c' ){
        if( a>=1 && b>=1 && c>=1){
            if( c==a || c== b || c== b+a){
                cout<<"SI";
            }else{
                cout<<"NO";
            }
        }else{
            cout<<"NO";
        }
    }else{
        cout<<"NO";
    }


    return 0;
}