#include<iostream>

using namespace std;

bool esbonito(int n){
    int a;
    int b;
    int c;
    int d;
    int x=0;
    while( n!=0){

        if( x==0 ){
            a= n%10;
            n= n/10;
            x++;
        }else    if( x==1 ){
            b= n%10;
            n= n/10;
            x++;
        }else    if( x==2 ){
            c= n%10;
            n= n/10;
            x++;
        }else    if( x==3 ){
            d= n%10;
            n= n/10;
            x++;
        }

    }
    if( a!= b && a!=c && a!=d && b!=c && b!=d && c!=d ){
        return true;
    }else{
        return false;
    }
    

}




int main(){
    int n;
    int c=0;
    cin>> n;

    while(c==0){
        n++;
        if( esbonito(n)){
            c++;
            cout<<n;
        }
    }





    return 0;
}