#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    double x;

    cin>> n;

    for(int i=0; i<n; i++){
        cin>> x;
        cout<< fixed<<setprecision(2)<< sqrt(((x*x)-(x/2)*(x/2)))<<"\n";
    }



    return 0;
}