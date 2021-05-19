#include<iostream>
#include<cmath>

using  namespace std;

int main(){
    long int a;
    long int b;
    long int c;
    cin>> a>> b>> c;

    long int maxi = max(a, b );
    maxi = max(maxi, c);
    long int mini= min( a,b);
    mini= min( mini,c);
    long int medio = a+b+c-mini-maxi;

    if( a== b && b== c){
        cout<< "imposible";
    }else{

        c= sqrt((pow(mini,2)+pow(medio,2)));

        if( c ==  maxi){
            cout<< maxi<<" "<<medio<<" "<< mini;
        }else{
            cout<<"imposible";
        }
    }
    return 0;
}