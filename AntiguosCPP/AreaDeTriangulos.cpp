#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main(){
    long double a;
    long double b;
    long double c;
    long double s;
    cin>>a>> b>> c;
    s=(a+b+c)/2;


    cout<<"Side 1:";
    if( a<10){
        cout<<"          ";
    }else if( a>=10 && a<100){
        cout<<"         ";
    }else if( a>=100 && a<1000){
        cout<<"        ";
    }else if( a>=1000 && a<10000){
        cout<<"       ";
    }else if( a>=10000 && a<100000){
        cout<<"      ";
    }else if( a>=100000 && a<1000000){
        cout<<"     ";
    }else if( a>=1000000 && a<10000000){
        cout<<"    ";
    }else if( a>=10000000 && a<100000000){
        cout<<"   ";
    }else if( a>=100000000 && a<1000000000){
        cout<<"  ";
    }else if( a>=1000000000 && a<10000000000){
        cout<<" ";
    }else if( a>=10000000000 && a<100000000000){
        cout<<"";
    }
    cout<<fixed<< setprecision(4)<<a<<endl ;
    cout<<"Side 2:";
        if( b<10){
        cout<<"          ";
    }else if( b>=10 && b<100){
        cout<<"         ";
    }else if( b>=100 && b<1000){
        cout<<"        ";
    }else if( b>=1000 && b<10000){
        cout<<"       ";
    }else if( b>=10000 && b<100000){
        cout<<"      ";
    }else if( b>=100000 && b<1000000){
        cout<<"     ";
    }else if( b>=1000000 && b<10000000){
        cout<<"    ";
    }else if( b>=10000000 && b<100000000){
        cout<<"   ";
    }else if( b>=100000000 && b<1000000000){
        cout<<"  ";
    }else if( b>=1000000000 && b<10000000000){
        cout<<" ";
    }else if( b>=10000000000 && b<100000000000){
        cout<<"";
    }
    cout<<fixed<< setprecision(4)<<b<<endl ;
    cout<<"Side 3:";
        if( c<10){
        cout<<"          ";
    }else if( c>=10 && c<100){
        cout<<"         ";
    }else if( c>=100 && c<1000){
        cout<<"        ";
    }else if( c>=1000 && c<10000){
        cout<<"       ";
    }else if( c>=10000 && c<100000){
        cout<<"      ";
    }else if( c>=100000 && c<1000000){
        cout<<"     ";
    }else if( c>=1000000 && c<10000000){
        cout<<"    ";
    }else if( c>=10000000 && c<100000000){
        cout<<"   ";
    }else if( c>=100000000 && c<1000000000){
        cout<<"  ";
    }else if( c>=1000000000 && c<10000000000){
        cout<<" ";
    }else if( c>=10000000000 && c<100000000000){
        cout<<"";
    }
    cout<<fixed<< setprecision(4)<<c<<endl<< endl ;
    cout<<"Area  :";
        if( sqrt( s*(s-a)*(s-b)*(s-c))<10){
        cout<<"          ";
    }else if( sqrt( s*(s-a)*(s-b)*(s-c))>=10 && sqrt( s*(s-a)*(s-b)*(s-c))<100){
        cout<<"         ";
    }else if( sqrt( s*(s-a)*(s-b)*(s-c))>=100 && sqrt( s*(s-a)*(s-b)*(s-c))<1000){
        cout<<"        ";
    }else if( sqrt( s*(s-a)*(s-b)*(s-c))>=1000 && sqrt( s*(s-a)*(s-b)*(s-c))<10000){
        cout<<"       ";
    }else if( sqrt( s*(s-a)*(s-b)*(s-c))>=10000 && sqrt( s*(s-a)*(s-b)*(s-c))<100000){
        cout<<"      ";
    }else if( sqrt( s*(s-a)*(s-b)*(s-c))>=100000 && sqrt( s*(s-a)*(s-b)*(s-c))<1000000){
        cout<<"     ";
    }else if( sqrt( s*(s-a)*(s-b)*(s-c))>=1000000 && sqrt( s*(s-a)*(s-b)*(s-c))<10000000){
        cout<<"    ";
    }else if( sqrt( s*(s-a)*(s-b)*(s-c))>=10000000 && sqrt( s*(s-a)*(s-b)*(s-c))<100000000){
        cout<<"   ";
    }else if( sqrt( s*(s-a)*(s-b)*(s-c))>=100000000 && sqrt( s*(s-a)*(s-b)*(s-c))<1000000000){
        cout<<"  ";
    }else if( sqrt( s*(s-a)*(s-b)*(s-c))>=1000000000 && sqrt( s*(s-a)*(s-b)*(s-c))<10000000000){
        cout<<" ";
    }else if( sqrt( s*(s-a)*(s-b)*(s-c))>=10000000000 && sqrt( s*(s-a)*(s-b)*(s-c))<100000000000){
        cout<<"";
    }
    cout<<fixed<< setprecision(4)<< sqrt( s*(s-a)*(s-b)*(s-c))     <<endl ;









    return 0;
}