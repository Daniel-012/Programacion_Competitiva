#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int n=1;
    
    while( n!=0){
        cin>> n;
        long int s=0;
        long int c=0; 
        for(long  int i=1; i<=n; i++){
            if( i== pow( 2, c)){
                s=s-i;
                c++;
            }else{
                s=s+i;
            }
        }
        if( n==0){
            cout<<endl;
        }else{

        cout<< s<<endl;
        }

    }



    return 0;
}