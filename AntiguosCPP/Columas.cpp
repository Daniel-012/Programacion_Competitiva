#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie();
    int n,m, p,x,y;

    cin>> n>>m>>p;

    for(int i=0; i<p; i++){
        cin>>x>>y;
        cout<<(x-1)*m+y<<"\n";
    }


    return 0;
}