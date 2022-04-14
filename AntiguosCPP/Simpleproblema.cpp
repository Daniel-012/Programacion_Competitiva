#include<iostream>
#include<cmath>

using namespace std;

int main(){
    long long int a;
    long long int b; 
    long long int c;
    cin>> a>>b>> c;
    if( a*b*c > 25){
        cout<<a*b*c<< endl<< pow( (a*b*c), 3);
    }else{
        cout<<a*b*c<<endl;
        for( int i=1; i<=10;i++ ){
            cout<<(a*b*c)+i<<endl;;
        }
    }





    return 0;
}