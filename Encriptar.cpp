#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    vector<char> pala(100000);

    int i=0;

    while(cin>>pala[i] && i<100000){

        if( pala[i]== 'a'){
            cout<<'e';
        }else if ( pala[i]== 'e'){
            cout<<'i';
        }else if( pala[i]== 'i'){
            cout<<'o';
        }else if( pala[i]== 'o'){
            cout<<'u';
        }else if( pala[i]== 'u'){
            cout<<'a';
        }else{
            cout<<pala[i];
        }
        i++;
    }


    return 0;
}