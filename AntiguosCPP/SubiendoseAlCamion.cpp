#include<iostream>

using namespace std;

int main(){
    int n;
    int x;
    int c=1;
    int s=1;
    cin>> n>> x;
    while( s<= x){

        if( c%2 !=0){
            if((n+s)*2-s<= x ){
            cout<< (n+s)*2-s<< " ";
            }else{
                if( s<(n+1)*2-1){
                    cout<<s<<" ";
                }
                s++;
            }
        }else{
            if( s<(n+1)*2-1){
            cout<<s<<" ";
            }
            s++;
        }
        c++;
    }









    return 0;
}