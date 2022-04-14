#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string palabra;
    char x;
    int n;

    
    while(cin>> x){
        palabra.push_back(x);
        n= x;
        if( x==' '){
            cout<<" ";
        }else if(x=='s'){
            cout<<'z';
        }else if(x=='S'){
            cout<<'Z';
        }else if( n== 97 || n==65){
            n+= 5;
            x=n;
            cout<<x;
        }else if(n== 69 ||n== 101){
            n+= 5;
            x=n;
            cout<<x;
        }else if(n== 73 || n==105){
            n+= 5;
            x=n;
            cout<<x;
        }else if(n== 79 ||n== 111){
            n+= 5;
            x=n;
            cout<<x;
        }else if(n== 85 ||n== 117){
            n+= 5;
            x=n;
            cout<<x;
        }else{
            if( n>=65 && n<= 90){
                n -=64;
                n += 7;
                n = n%26;
                n+=64;
                x=n;
                cout<<x;

            }else{
                n +=7;
                n-=96;
                n = n%26;
                n+=96;
                x=n;
                cout<<x ;  
            }
        }
    }
    
    cout<<palabra;



    return 0;
}