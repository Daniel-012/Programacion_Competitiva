#include<iostream>

using namespace std;

long long int f( long long int b, long long int p, int m){
    if(p== 0){
        return 1;
    }
    if(p== 1){
        return b;    
    }
    if(p% 2 == 0){
        long long int a= f(b,p/2,m);
        //cout<<a<<" ";
        return a*a % m;
    }else{
        return (f(b, p-1, m)*b) %m ;
    }
}




int main(){
    long long int a;
    long long int b;
    int c;
    cin>> a>> b>> c;

    cout<< f(a,b,c);


    return 0;
}