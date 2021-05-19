#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    long int b;
    long int suma = 0;
    cin>> n>> b;

    vector<int>vec(n);
    int i;
    for(i=0; i<n; i++){
        cin>> vec[i];
        suma= suma+ vec[i];
    }
    sort( vec.begin(), vec.end());
    long int z=0;
    i=vec.size()-1;
    while(z<b){
        z= z+ vec[i];
        i--;
    }
    z= i;

    int  x = suma-b;
    int sumi=0;
    int sumaminima=0;
    i=0;
    while(sumi>= x ){
        sumi= sumi+ vec[i];
        i++;
        if( sumi>= x){
            sumaminima= sumi;
        }
    }

    cout<< (x- sumaminima)*-1;

    return 0;
}