#include<bits/stdc++.h>

using namespace std;



int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long int x;
    long int y;
    long int a;
    long int b;

    cin>> x>> y;

    vector<bool> vec(x);

    for(long int i=0; i<y; i++){
        cin>> a>>b;
        if( a+1 == b || a-1 == b){
            vec[a]= true;
            vec[b]= true;

        }
    }

    long int max=0;
    long int actu=0;

    for(long int i=0; i<x; i++){

        while( vec[i]== true && i<x){
            i++;
            actu++;

        }

        if(actu>= max){
            max= actu;
        }
        actu=0;

    }

    cout<<max;

    

    return 0;
}