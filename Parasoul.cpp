#include<iostream>

using namespace std;

int main(){
    int x;
    int a=0;
    int b=0;
    int c=0;
    int max=-1000;

    for( int i=0; i<3; i++){
        cin>> x;
        if( i== 0){
            a= x;
            if( a>= max){
                max= a;
            }
        } else if( i== 1){
            b= x;
            if( b>= max){
                max= b;
            }
        }else if( i== 2){
            c= x;
            if( c>= max){
                max= c;
            }
        }
    }

    
    if( a != b || a!=c || b!=c ){
        cin>> x;
        cout<< max<<endl;
        for( int i=1; i<=x;i++){
            cout<< max+ i*2<< endl;
        }
    }else{
        cout<<max<<endl;
        for( int i=1; i<=7; i++){
            cout<<max+ i*2<<endl;
        }
    }



    return 0;
}