#include<bits/stdc++.h>

using namespace std;

int main(){
    string lista;
    char x;
    int k;
    int n;
    int suma=0;
    cin>> k;

    while( k!=0){
        cin>> x;
        cin>> n;
        suma= suma+n;
        getline(cin, lista);
        k--;
    }
    cin>> n;
    if( n== suma){
        cout<< "Todo bien, todo correcto y yo que me alegro";
    }else{
        cout<< suma;
    }

    return 0;
}