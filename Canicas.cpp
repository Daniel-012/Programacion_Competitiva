#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

  

    int n,q,x;
    cin>>n >>q;
    map<int,int> mapa;

    for(int i=1; i<=q; i++){
        cin>> x;
        mapa[x]++;
    }

    for(int i=1; i<=n; i++){
        cout<<mapa[i]<<"\n";
    }





    return 0;
}