#include<iostream>

using namespace std;

int piramide( long long int n){

    long int c=1;
    long long int s= 1;
    long long int suma=s;
    long long int s2;
    while( suma < n){
        s++;

        s2 = s+ s;
        suma=  suma + s2;
        c++;

    }
    return c;

}



int main(){
    int n;
    long long int x;
    cin>> n;
    while( n!=0){
        cin>> x;
        cout<< piramide( x)<< endl;

        n--;
    }





    return 0;
}