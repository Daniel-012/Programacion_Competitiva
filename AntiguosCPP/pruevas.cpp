#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main(){
    float a =0;
    float b=0;
    cin>>a>>b;
    cout<<fixed<<setprecision(3)<<sqrt(a*a+b*b);

    return 0;
}
