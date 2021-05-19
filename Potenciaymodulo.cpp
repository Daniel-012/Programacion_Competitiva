#include<iostream>
#include<cmath>

using namespace std;

int main(){
    unsigned long long int n;
    unsigned long long int m;
    cin>> n>> m;
    unsigned long long int v= pow(n, m) ;
    cout<< v<<endl;
    cout<< v%10;
    return 0;
}