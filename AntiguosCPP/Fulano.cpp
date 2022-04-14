#include<bits/stdc++.h>

using namespace std;

unsigned long long int s=0;

void limite( vector<int>& vec,long int x){
    int ini=0;
    int fin= vec.size()-1;
    while( ini<= fin){
        int  mitad= (ini+fin)/2;
        if( f( vec[mitad], x)== true){
            fin= mitad;
        }else{
            ini= mitad+1;   
        }
    }

    if( f(valores[ini], x)== true){
        cout<< ini<<"\n";
    }
    




}




int main(){
    
    int n, q;
    long int x;
    
    cin>> n>> q;
    vector<int> vec(q);

    for(int i=0; i<q; i++){
        cin>> vec[i];
        vec[i]= vec[i]+s;
        s= vec[i];
    }

    while( n!=0){
        cin>> x;

        limite( vec, x);

        n--;
    }





    return 0;
}