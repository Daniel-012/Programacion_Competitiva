#include<iostream>

using namespace std;

int main(){
    int a;
    int b;
    cin>> a>>b;
    if( a==  b){
        cout<<24;
    }else if( b>a){
        cout<< b-a;
    }else{
        cout<< 24 -a +b;
    }



    return 0;
}