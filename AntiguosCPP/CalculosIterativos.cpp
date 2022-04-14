#include<iostream>
#include<cmath>
using namespace std;


int main(){
    int a;
    int b;
    int c;
    int n=0;

    cin>>a>>b>>c;

    for( int i=1 ; i<=a; i++){
        if( i%2>=1){
            n=n+i;
        }
        cout<<n<<endl;
        if( pow(2,i)<=b){
            n=n-pow(2,i);
        }
        cout<<n<<endl;
    }
    cout<<n<<endl;
    while( n%c==0){
        n=n/c;
    }

    cout << n;



    return 0;
}