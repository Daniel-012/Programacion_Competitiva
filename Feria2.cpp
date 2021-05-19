#include<bits/stdc++.h>

using namespace std;

int suma( int x, int d, vector<int> vec ){
    int c=0;
    for( int i=x; i<d; i++ ){
        c= c+vec[-1];

    }
    return c;
}

int main(){
    vector<long long int> vec;
    int d;
    int p;
    int x;

    cin>> d>> p;

    for(int i=0; i<d; i++){
        cin>> x;
        vec.push_back(x);
    }
    for(int i=0; i<p; i++){
        cin>> x;
        cin>> d;
        

    }


    return 0;
}