#include<iostream>

using namespace std;

int main(){
    int a;
    int b;
    int c;
    int sum;
    int s=0;

    cin>> a>> b>>c;
    sum= a+b;

    while( sum!=0 && sum>= c){
        s= s+ sum/c;
        sum= sum/ c +sum%c;

    }



    cout<<s;


    return 0;
}