#include<iostream>

using namespace std;


int main(){
    int a;
    int b;
    int c;
    int d;

    int n;

    int x;
    int y;

    int con=0;

    cin>> n;
    n--;
    cin>> a>>b>>c>>d;
    while(n!=0){
        cin>> x>> b>> c>> y;
        if(x <= a && y>=d  ){
            if(  a<c && d> b){
                con++;
            }
        }


        n--;
    }

    cout<< con+1;

    return 0;
}