#include<bits/stdc++.h>

using namespace std;

int main(){
    long long int n;
    long long int x;
    vector<long  long int> vec;
    cin>> n;
    for(long int i=0; i<n ; i++){
        cin>>  x;
        vec.push_back(x);
    }
    cin>> x;
    n=0;
    for(long int i=0; i<vec.size() ; i++){
        if( vec[i]== x){
            n++;
        }

    }



    cout<< n;


    return n;
}

