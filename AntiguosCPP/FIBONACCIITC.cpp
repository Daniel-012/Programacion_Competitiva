#include<iostream>

using namespace std;

int fibonaci( int n){
    int p=0;
    int a=0;
    int b= 1;
    int c= 1;
    while( c!= n && c< n){
        a= b;
        b= c;
        c= a+b; 

        p++;
    }
    return p;
}

bool fibonaci1( int n){
    int p=0;
    int a=0;
    int b= 1;
    int c= 1;
    while( c!= n && c< n){
        a= b;
        b= c;
        c= a+b; 

        p++;
    }
    if( c== n){
        return true;
    } else{
        return false;
    }

}



int main(){
    int n;
    cin>> n;
    if( n== 1){
        cout<< "Si 2 y 3";
    }else{
    if (fibonaci1( n)){
        cout<< "Si"<< " " << fibonaci( n)+3;
    }else{
        cout<<"No";
    }
    }



    return 0;
}