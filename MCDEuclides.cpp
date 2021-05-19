#include<iostream>

using namespace std;

int main(){
    int a;
    int b;
    int max;
    int min;
    cin>> a>> b;

    if( a>=b){
        max= a;
        min=b;
    }else{
        max=b;
        min= a;
    }
    if( max%min==0){
        cout<<min;
    }else{
        int mcd= max%min;
        while( mcd!=0){
            max=min;
            min=mcd;
            mcd= max%min;


        }
        cout<<min;
    }
    
    





    return 0;
}