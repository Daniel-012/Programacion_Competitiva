#include<bits/stdc++.h>

using namespace std;


typedef long long int lli;

int main(){
    int n;
    int k;
    cin>> n>> k;
    vector<int> vec(n);
    vector<int> operaciones(n);

    for(int i=0; i<n; i++){
        cin>> vec[i];
    }

    for(int i=1; i<n; i++){
        operaciones[i]= vec[i]-vec[i-1]+operaciones[i-1];
    }

    lli maximo= INT_MIN;

    /*for(int i=0; i<n; i++){
        cout<<operaciones[i]<<" ";
    }*/

    for(int i=0; i<=n-k; i++){
        int emocion= operaciones[i+k-1]-operaciones[i];
        if(emocion>= maximo){
            maximo= emocion;
        }
    }


    cout<<maximo;


    return 0;
}