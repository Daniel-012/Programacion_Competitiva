#include<bits/stdc++.h>

using namespace std;

float c(int a , int b){
    float c;
    c= sqrt(a*a+b*b);
    return c;
}

int main(){
    int a =0;
    int b=0;
    cin>>a>>b;
    cout<<fixed<<setprecision(3)<< c(a,b);

    return 0;
}