#include<bits/stdc++.h>

using namespace std;

vector<int> pos;

int f( int ini, int fin){






}






int main(){
    int n;
    cin>> n;

    vector>int> vec(n);

    for(int i=0; i<n; i++){
        cin>> vec[i];
    }



    for(int i=0; i<n-1; i++){
        f(vec[i], vec[i+1])<<" ";
    }
    cout<<pos.size()<<'\n';
    for(int i=0; i<n; i++){
        cin>> vec[i]<< " ";
    }



    return 0;
}