#include<iostream>

using namespace std;


int main(){
    int a;
    int b;
    int c=0;

    cin>> a>> b;
    int ant;
    int des;
    int d;

    cout<< a<< " "<< b<< " ";

    while( ant != a || des!= b){
        if( c==0){
            ant = a; 
            des = b;
            d= ant + des;
            ant = b;
            des= d;
        }else{
            d= ant + des;
            ant = des;
            des= d;
        }
        
        if ( ant >= 10){
            ant = ant%10;
        }
         if( des>= 10){
            des= des%10;
        }
        cout<< des<<" ";

        c++;
    }

    cout<< endl<< c;










    return 0;
}