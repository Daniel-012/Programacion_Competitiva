#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    int i=0;
    cin>> n;
    vector<int> a(n);
    vector<int> b(n);

    for(i=0; i<n; i++){
        cin>>a[i];
    }
    for(i=0; i<n; i++){
        cin>>b[i];
    }
    long long int sum=0;
    for(i=0; i<n; i++){
        sum+= a[i]*b[i]; 
    }

    cout<<sum;



    return 0;
}