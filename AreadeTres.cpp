#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main(){
    long double a;
    long double b;
    long double c;
    long double s;
    int contador;
    cin>>a>> b>> c;
    s=(a+b+c)/2;


    cout<<"Side 1:";
    contador=1;
    int num=a;
    while( num/10>0){
        num=num/10;
        contador++;
    }
    contador=11-contador;
    while( contador!=0){
        cout<<" ";
        contador--;
    }
    cout<<fixed<< setprecision(4)<<a<<endl ;
    cout<<"Side 2:";
        contador=1;
    num=b;
    while( num/10>0){
        num=num/10;
        contador++;
    }
    contador=11-contador;
    while( contador!=0){
        cout<<" ";
        contador--;
    }
    cout<<fixed<< setprecision(4)<<b<<endl ;
    cout<<"Side 3:";
    contador=1;
    num=c;
    while( num/10>0){
        num=num/10;
        contador++;
    }
    contador=11-contador;
    while( contador!=0){
        cout<<" ";
        contador--;
    }
    cout<<fixed<< setprecision(4)<<c<<endl<< endl ;
    cout<<"Area  :";
        contador=1;
    num=sqrt( s*(s-a)*(s-b)*(s-c));
    while( num/10>0){
        num=num/10;
        contador++;
    }
    contador=11-contador;
    while( contador!=0){
        cout<<" ";
        contador--;
    }
    cout<<fixed<< setprecision(4)<< sqrt( s*(s-a)*(s-b)*(s-c))     <<endl ;






    return 0;
}
