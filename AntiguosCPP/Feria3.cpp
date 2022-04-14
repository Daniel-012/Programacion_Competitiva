#include<bits/stdc++.h>

using namespace std;


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
        cin>> x>> d;
        
        int c=0;

        for( int i=x; i<=d; i++ ){
            c= c+vec[i-1];

        }
        
    cout<< c<< endl;
    }


    return 0;
}