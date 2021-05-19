#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>> n;
    int res=0;
    if( n< 540 || n> 1520){
        cout<<"error";
    }else{
        if( n>= 580 && n<= 980){
            if(n< 780){
                cout<< "atras "<< n-580;
            }else{
                cout<< "adelante "<< 980-n;
            }


        }else if(n>= 980 && n<= 1190 ){
            if(n< 1085){
                cout<< "atras "<< n- 980;
            }else{
                cout<< "adelante "<< 1190-n;
            }

        }else if(n>= 1190 && n<=1250){
            if(n< 1220){
                cout<< "atras "<< n- 1190;
            }else{
                cout<< "adelante "<<1250-n;
            }

        }else if(n>= 1250 && n<=1420){
            if(n< 1335){
                cout<< "atras "<< n-1250;
            }else{
                cout<< "adelante "<<1420-n;
            }

        }else{
            cout<< "atras "<< n-1420;
        }



    }



    return 0;
}