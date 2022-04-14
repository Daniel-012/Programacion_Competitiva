#include<bits/stdc++.h>

using namespace std;

int main(){
    int x;
    cin >>x;
    while ( x!=0){
        int a;
        long int b;
        long int res;
        cin>> a>> b;
        res= a;

        b= b%4;

        if( b==0){
            for(long int i=1; i<4 ; i++){
            res= res*a;
            res= res%10;
        }
        cout<<res<<"\n";
        }else{
            for(long int i=1; i<b ; i++){
            res= res*a;
            res= res%10;
        }

        cout<<res%10<<"\n";

        }
        
        
        x--;
    }
    

    return 0;
}