#include<iostream>

using namespace std;

bool comparar(long long int x){
    for(int i=2;i<x ;i++ ){
        if(x%i==0){
            return false;
        }

    }
    return true;

}


int main(){
    long long int x;

    cin>> x;
    if(x<=1){
        cout<<"No";
    }else{

    if(comparar(x)){
        cout<<"Si";
    }else{
        cout<< "No";
    }


    }
    return 0;
}