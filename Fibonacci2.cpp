#include<iostream>

using namespace std; 
int main(){
    int n;
    int a=1;
    int b=1;
    int c;
    cin>> n;
    for(int i=1; i<=n; i++){
        if( i==1){
            cout<<1<< endl;
        }else if( i==2){
            cout<<1<< endl;
        }else{
        c=a+b;
        cout<< c<< endl;
        a=b;
        b=c;
        }
    }



    return 0;
}