#include<iostream>

using namespace std;

int main(){
    short int a, b , c , d;
    cin>> a>> b>> c>> d;
    
    if((((c*60+d)-(a*60+b))/60) < 0  ){

        cout<<(((c*60+d)-(a*60+b))/60)+24<<" ";

        if( ((c*60+d)-(a*60+b))%60<0 ){
            cout<<(((c*60+d)-(a*60+b))%60)+60;
        }else{
            cout<<((c*60+d)-(a*60+b))%60;
        }
    }else{

        cout<<((c*60+d)-(a*60+b))/60 <<" ";

        if( ((c*60+d)-(a*60+b))%60<0 ){
            cout<<(((c*60+d)-(a*60+b))%60)+60;
        }else{
            cout<<((c*60+d)-(a*60+b))%60;
        }
    }



    return 0;
}