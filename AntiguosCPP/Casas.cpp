#include<bits/stdc++.h>

using namespace std;

typedef long long int lli;

int main(){
    //  ios_base::sync_with_stdio(0);
    //cin.tie(0);
    lli suma=0;
    int con;
    int n,j;
    int c, pos;

    cin>> n;
    for(int i=1; i=<n; i++){
        cin>> c>> pos;
        vector<int> vec(c);
        for(j=0; j<c; j++){
            cin>> vec[j];
        }

        sort(vec.begin(),vec.end());
        suma=0;
        con=0;
        for(j=0; j<c; j++){
            suma+=vec[j];
            if( suma<= pos){
                con++;
            }else{
                break;
            }
        }
        cout<<"Case #"<<i<<": "<<con<<"\n";


    }





    return 0;
}