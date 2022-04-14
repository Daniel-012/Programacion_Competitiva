#include<bits/stdc++.h>

using namespace std;

typedef long long lli;

lli codigo(){
    int n, k, p;
    cin>> n>>k>> p;
    int mat[n+1][k+1]={};
    
    for(int i=1; i<=n; i++){
        for(int j=1; j<=k; j++){
            cin>> mat[i][j];
            mat[i][j] += mat[i][j-1];
        }
    }

    for(int i=0; i<p; i++){
        
    }




}



int main(){
    //ios_base::sync_with_stdio(0);
    //cin.tie(0);

    int casos;
    cin>> casos;

    for(int i=1; i<=casos; i++){
        lli b= codigo();
        cout<<"Case #"<<i<<": "<<b<<"\n";
    }
    



    return 0;
}