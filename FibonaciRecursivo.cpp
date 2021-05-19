#include<bits/stdc++.h>

using namespace std;

typedef unsigned long long int lli;
lli c=0;

lli fibo(int n){
    c++;
    if( n==0){
        return 0;
    }
    if(n== 1){
        return 1;
    }
    return fibo(n-1)+ fibo(n-2);


}






int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>> n;

    cout<<fibo(n)<<" "<< c;




    return 0;
}