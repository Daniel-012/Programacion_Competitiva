#include<iostream>
#include<cmath>

using namespace std;


float s( float a, float b, float c){
    float resul = (a+b+c)/2;
    return resul;
}

int main(){
    float a;
    float b;
    float c;

    cin>> a>> b>> c;
    float res= s(a,b,c);

    cout<< sqrt(   (res*(res-a)*(res-b)*(res-c))   );






}