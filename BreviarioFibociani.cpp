#include<iostream>

using namespace std;

long long int fibo(long long int n ){
    

    if( n== 0){
        return 0;
    }else if( n== 1){
        return 1;
    }else{
    n=n-1;
    int a=0;
    int b=1;
    int c=0;
    while( n!=0 ){

        c= a+b;
        a=b;
        b=c;

        n--;
    }
    
    return c;
    }
}



int main(){
    int x;
    for( int i=0; i<3; i++){
        cin>>x;
        cout<<fibo(x)<<endl;
    }

    return 0;

}