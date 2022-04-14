#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>> n;
    vector<int> vec(n);

    for(int i=0; i<n; i++){
        cin>> vec[i];
    }
    int maxi= 1;
    int c=1;

    for(int i=0; i<n-1; i++){
        while ( vec[i] > vec[i+1] && i<n-1){
            i++;
            c++;
        }

        if( c>= maxi){
            maxi= c;
        }

        c=1;
        
    }

    cout<<maxi;




    return 0;
}