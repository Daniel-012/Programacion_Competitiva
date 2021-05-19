#include<bits/stdc++.h>

using namespace std;

typedef long long int lli;

int main(){
    
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    lli suma=0;

    int a;
    int k;
    int x;

    cin>> a>> k;


    for(int i=0; i<a; i++){
        cin>> x;
        if(x>k){
            suma += k;
        }else{
            suma+= x;
        }

    }

    cout<<suma;



    return 0;
}