#include<bits/stdc++.h>

using namespace std;
typedef long long int lli;

int main(){
    int n,p;
    cin>> n>> p;
    vector<int> vec(n);
    lli multi=0;

    for(int i=0; i<n; i++){
        cin>> vec[i];
        multi*= vec[i];
    }
    multi= milti%1000003;

    for(int i=2; i<multi/2+1; i++){
        if( multi%i==0){
            
        }
    }




    return  0;
}