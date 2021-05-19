#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int a,b;

    cin>> a>> b;

    if( a==b){
        cout<<"Nivel Optimo";
        return 0;
    }

    if( a< b){
        cout<<"1 "<<b-a;
    }else{
        cout<<"2 "<<a-b;
    }




    return 0;
}