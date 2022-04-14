#include<iostream>
#include<string>

using namespace std;

int main(){
    char x;
    int m;
    int  c=0;
    int max=0;
    char preletra;
    char letra;
    string pala;
    cin>> pala;


    for( int i=0; i<pala.size(); i++){
        
        preletra= pala[i];
        c= preletra;
        if( c >= 65 && c<= 90){
            m= c +32;
        }else{
            m=c - 32;
        }
        x= m;
        c=0;
        for(int j=0; j<pala.size(); j++){
            if( pala[j]== preletra || pala[j]== x){
                c++;
            }
        }
        if( c>= max){
            max= c;
            letra = preletra;
        }

    }


    cout<< letra;


    return 0;
}