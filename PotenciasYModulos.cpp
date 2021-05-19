#include<iostream>
#include<cmath>

using namespace std;

int main(){
    long  long int a=0;
    long long int b=0;
    long long int c=0;

    cin>> a>>b>> c;

    long long int x= pow( a, b) ;

    cout<<  x% c;


    return 0;
}