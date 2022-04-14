#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string x;

    getline(cin,x);
    string palabra= x;

    sort(x.begin(), x.end());

    int p=0;

    while(x[p]==' ' || x[p]==',' || x[p]=='.' ){
        p++;
    }
    int j=0;
    for(int i=0; i<x.size(); i++){
        if( palabra[i]==' ' || palabra[i]==',' ||palabra[i]=='.'){
            cout<<palabra[i];
            j++;
        }else{
            cout<<x[i+p-j];
        }
    }




    return 0;
}