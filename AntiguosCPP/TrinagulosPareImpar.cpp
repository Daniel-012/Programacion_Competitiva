#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int i, f;
    int impar=0;
    int par=0;
    cin>> i>>f;

    for(i; i<= f; i++){
        if( i%2==0){
            par++;
        }else{
            impar++;
        }
    }

    cout<<impar*impar<<" "<<par*par;


    return 0;
}