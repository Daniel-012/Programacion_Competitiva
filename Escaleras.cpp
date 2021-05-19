#include<iostream>

using namespace std;
int main(){
    long int a;
    long int b;
    long int s1=0;
    long int s2=0;
    
    cin>> a>> b;
    int n= a+b;
    for(int i=1; i<= n; i++){
        if( i==1){
            s1=1;
            a=s1;
        }else if( i==2){
            s2=2;
            b=s2;
        }else{ 
            if( i%2==0){
                s1=s1+2;
                a=a+s1;
            }else{
                s2=s2+2;
                b=b+s2;
        }
        }
    }
    cout<< a<< " "<< b;



    return 0;
}