#include<iostream>
#include<string>

using namespace std;

int main(){
    string pala;
    cin>> pala;
    if( pala.size()<= 4){
        cout<<pala;
    }else{
        cout<<pala[0]<<pala.size()-2<< pala[ pala.size()-1];
    }





    return 0;
}