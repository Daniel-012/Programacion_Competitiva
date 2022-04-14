#include<bits/stdc++.h>

using namespace std;

vector<int> vec(100000);
vector<int> vec2(200000);


void mami( int x, int y){
    int suma=0;
    


    
}





int main(){
    int n;
    int i=0;
    cin>> n;
    for(int i=0; i<n; i++){
        cin>> vec[i];
    }
    int x;
    int y;
    n--;

    for(int i=0; i<n*2; i+= 2){
        cin>> x;
        vec2[i]= vec[x-1];
        cin>> y;
        vec2[i+1]= vec[y-1];
    }

    int a;
    cin>> a;
    for(int i=0; i<a; i++){
        cin>> x>> y;
        int pos;
        int j=0;
        
        while( )
        mami(x-1, y);
        cout<<"\n";
    }





    return 0;
}