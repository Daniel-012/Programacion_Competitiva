#include<iostream>

using namespace std;
int main(){
    long int a;

    for( int i=0; i<4; i++){
        cin>> a;
        if(a%4==0){
            if(a%100==0){
                if(a%4==0 && a%400==0){
                    cout<< 29<<" ";
                }else{
                    cout<< 28<<" ";
                }
            }else{
                cout<< 29<<" ";
            }
        }else{
            cout<<28<<" ";
        }

    }


    return 0;
}