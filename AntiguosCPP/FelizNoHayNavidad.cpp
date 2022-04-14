#include<iostream>
#include<string>

using namespace std;

int main(){
    long int c=0;
    long int m=0;
    long int b=0;
    char x;
    long int n;
    string nombre;
    cin>>  n;
    for(long int i=0; i<n; i++){
        cin>> nombre;
        cin>> c;
        m=0;
        b=0;
        for(long int j=0; j<c; j++){
            cin>> x;
            if( x=='B'){
                b++;
            }else{
                m++;
            }
        }
        if( b> m*2 ){
            cout<< nombre<<" REGALO"<< endl;
            
        }else{
           cout<< nombre<<" CARBON"<<endl;
        }

    }


    return 0;
}