#include<iostream>

using namespace std;

int main(){
    int n;
    int d;
    int s=2;
    cin>> n;
    int c=0;
    d= n*2-1;
    int h=0;

    for( int i=1; i<=d; i++){
        if( i>n ){
            h=h+2;
        }
        
        int e=1+c-h;
        while( d/2-e >=0 ){
            cout<<"-";
            e++;
        }

        if( i<=n){
        int j= i*2-1 ;
        while(  j>=1 ){
            cout<< "+";
            j--;
        }
        }else{
        int j= n*2-1 - s;
        while(  j>=1 ){
            cout<< "+";
            j--;
        }
        s=s+2;
        }
        e=1+c-h;
        while( d/2-e >=0 ){
            cout<<"-";
            e++;
        }
        cout<<endl;
        c++;   
    }

    return 0;
}