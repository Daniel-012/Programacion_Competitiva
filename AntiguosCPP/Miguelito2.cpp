#include<iostream>

using namespace std;

long long int f(long long int a,long long int n, int c){
    long long int x= a;
    for(long long int i=1;i< n; i++ ){
        a= a* x;
        a= a% c;
    }
    return a;

}





int main(){
    long long int a;
    long long int n;
    long long int c;
    cin>> a>> n>> c;

    cout<<f(a,n,c) ;


    return 0;
}