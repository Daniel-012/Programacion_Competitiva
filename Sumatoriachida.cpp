#include<bits/stdc++.h>

using namespace std;
typedef unsigned long long int lli;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin>> n;
    vector<int> vec(n+1);
    vector<lli> su(n+1);
    lli suma=0;

    for(int i=0; i<n; i++){
        cin>> vec[i];
    }
    
    
    for(int i=n-1; i>=0; i--){
        su[i]+= vec[i]+ su[i+1];
    }

    for(int i=0; i<n; i++){
        suma+= (su[i]-vec[i])*vec[i];
    }
    

     cout<<suma;

    return 0;
}