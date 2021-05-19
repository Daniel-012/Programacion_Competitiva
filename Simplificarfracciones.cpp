#include<iostream>

using namespace std;

int main(){
    long long int a;
    long long int b;
    long long int n;
    long long int mcd;
    long long int max;
    long long int min;
    long long int mod;
    long long int div;

    cin>> n;
    
    for( long long  int i=0; i<n; i++){
        cin>> a>> b;
        if( a>=b){
            max=a;
            min=b;
        }else{
            max=b;
            min=a;
        }
        mod=max%min;
        mcd= min;
        while( mod!=0){
            max=min;
            min=mod;
            mod=max%min;
            mcd=min;
        }
        
        cout<<a/mcd<<" "<<b/mcd<<endl;

    }



    return 0;
}