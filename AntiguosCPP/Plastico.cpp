#include<iostream>
#include<string>

using namespace std;

int main(){
    string palabra;

    while(cin>>palabra){

    if( palabra.size()== 5 &&  palabra[2]== 'l' || palabra[2]== 'L'){
        cout<<"120 años"<<endl;
    }else    if( palabra.size()== 6){
        cout<<"100 años"<<endl;
    }else   if( palabra.size()== 9){
        cout<<"400 años"<<endl;
    }else   if( palabra.size()== 7){  
        cout<<"450 años"<<endl;
    }else   if( palabra.size()== 5){
        cout<<"450 años"<<endl;
    }else   if( palabra.size()== 13){
        cout<<"600 años"<<endl;
    }else   if( palabra.size()== 4){
        cout<<"75 años"<<endl;
    }

    }
    return 0;
}