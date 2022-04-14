#include<iostream>

using namespace std;

int main(){
    int r1;
    int r2;
    int c1;
    int c2;
    int d1;
    int d2;
    cin>> r1 >>r2 >>c1 >>c2 >>d1>> d2;
    int b= (( r1-c1)+d2)/2;
    int a= ((r1-d2)+c1)/2;
    int c= ((d2-c2)+r2)/2;
    int d= ((r2-c1)+d1)/2;
    if( a != b  && a != c && a != d && b != c && b!=d && c!=d){
        if( a<= 0 || b<= 0 || c<= 0 || d<= 0 || a>= 10 || b>= 10 || c>= 10 || d>= 10 ){
            cout<<" "<<-1<<endl;
        }else{
            cout<<" "<< a<<" "<<b<<endl<<" "<< c<< " "<<d;
        }
    }else{
        cout<<" "<<-1<<endl;
    }


    return 0;
}