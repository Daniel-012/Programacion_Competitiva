#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, k, i;
    long long int x, y;
    cin>> n>> k;
    vector<long long int> vec(100000000000000);
    for(i=0; i<n; i++){
        cin>> x>> y;
        vec[x+y];
    }
    map<long long int ,long long int> vecmapeado;
    for(i=0; i<n; i++){
        vecmapeado[vec[i]]++;
    }
    
    for(i=0; i<k; i++){
        cin>> x>> y;
        cout<<vecmapeado[x+y]<<" ";
    }



    return 0;
}