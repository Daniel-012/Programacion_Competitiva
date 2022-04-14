#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n;
    int x;
    int e;
    int s=0;
    vector<int> vec;

    cin>> n>> x;

    for(int i=0; i<n; i++){
        cin>> e;
        vec.push_back(e);
    }

    for(int i=0; i<n; i++){
        if( vec[i]<x){
            s++;
        }


    }
    
    cout<< s;


    return 0;
}