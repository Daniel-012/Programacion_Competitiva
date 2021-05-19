#include<iostream>

using namespace std;

int main(){
    int a;
    int b;
    int c;
    cin>>a>>b>> c;
    if(  a<= 168){
        cout<<"CRASH "<< a;
    }else if( b<= 168){
        cout<<"CRASH "<< b;
    }else if( c<= 168){
        cout<<"CRASH "<< c;
    }else{
        cout<<"NO CRASH";
    }



    return 0;
}