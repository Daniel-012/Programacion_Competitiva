#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int n;
    int c=1;
    cin>> n;
    while( pow(2,c)!=n){
        c++;
    }
    cout<<c;





    return 0;
}