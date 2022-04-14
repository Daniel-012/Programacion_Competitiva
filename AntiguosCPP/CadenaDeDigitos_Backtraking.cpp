#include<bits/stdc++.h>

using namespace std;

typedef unsigned long long int lli;
int n;
int k;

lli memo[20][2][20]= {};

lli armar( int pos, bool ac, int ceros){
    if(pos> n || ceros> k){
        return 0;
    }
    if( pos==n &&  ceros<= k){
        return 1;
    }
    if( memo[pos][ac][ceros] != 0){
        return memo[pos][ac][ceros] ;
    }

    lli c=0;

    for(int i=0; i<=9; i++){
        if(i==0){
            if(ac== true){
                continue;
            }else{
                c += armar(pos+1, true, ceros+1);
            }
        }else{
            c += armar(pos+1, false, ceros);
        }
    }

    memo[pos][ac][ceros]= c;
    return  memo[pos][ac][ceros];


}







int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin>> n>>k;

    cout<< armar(0, false, 0);




    return 0;
}