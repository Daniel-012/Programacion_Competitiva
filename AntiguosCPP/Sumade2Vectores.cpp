#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    int x;
    cin>>n;

    vector<int>vec(n);

    for(int i=0; i<n; i++){
        cin>> vec[i];
    }

    for(int i=0; i<n; i++){
        cin>>x;
        vec[i]+=x;
        cout<<vec[i]<<" ";
    }


    return 0;
}