#include<bits/stdc++.h>

using namespace std;

int main(){

    int n;
    int x;
    int s=0;
    vector<int> vec;

    cin>>n;

    for(int i=0; i<n; i++){
        cin>> x;
        vec.push_back(x);
    }

    for(int i=0; i<n-1; i++){
        for(int j=i; j<n-1; j++){
            s=s+vec[i]*vec[j+1];


        }
    }


    cout<<s;


    return 0;
}