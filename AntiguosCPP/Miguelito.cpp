#include<iostream>

using namespace std;

long long int f(long long int& a,long long int n,long long int& c){
    if(n== 0){
        return 1;
    }else{
        return (f(a, n-1,c)*a) % c;
    }

}





int main(){
    long long int a;
    long long int n;
    long long int c;
    cin>> a>> n>> c;

    cout<<f(a,n,c);


    return 0;
}