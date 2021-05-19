#include<iostream>

using namespace std;

int piramide( long long int n){
    long int c=2;
    long long int s= 1;
    long long int s2= 3;
    long long int s3 =0;
    long long int sum= s2 + s;
    long long int sum2= sum +1;
    while( sum2 < n){
        s= s2;
        s2= s2 + 2;

        sum= sum + s2;

        sum2= sum2 + sum;



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