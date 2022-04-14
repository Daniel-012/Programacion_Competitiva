#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, m, x;

    cin>> n>>m;

    vector<int> vec(n+1);

    for(int i=0; i<m; i++){
        cin>> x;
        vec[x]++;
    }

    for(int i=1; i<=n; i++){
        cout<<i<<"-"<<vec[i]<<"\n";
    }




    return 0;
}