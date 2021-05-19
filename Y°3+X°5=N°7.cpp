#include<iostream>
#include<cmath>

using namespace std;

int main(){
    long long int n;

    cin>> n;

    double y= (pow( 4*n , (double)1/3)*n*n)/2;

    double x= pow( 16* n*n , (double)1/5)*n /2;


    long int y1= y;
    long int x1= x;
    cout<< y<<" "<<x<<endl;
    cout<< y1<<" "<<x1<<endl;

    if( y1==y || x1==x){
        cout<<1;
    }else{
        cout<< -1;
    }






    return 0;
}