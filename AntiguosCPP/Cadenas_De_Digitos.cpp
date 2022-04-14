#include<bits/stdc++.h>

using namespace std;

typedef long long int lli;
  
lli fact(lli n) 
{ 
    lli res = 1; 
    for (lli i = 2; i <= n; i++) 
        res = res * i; 
    return res; 
} 
  

  
lli nCr(int n, int r) 
{ 
    return fact(n) / (fact(r) * fact(n - r)); 
} 
  




int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n,k;
    cin>> n>> k;
    lli suma1=0;

    for(int i= k+1; i<=n; i++){
        suma1 += nCr(n, i)* pow(9, n-i);
    }

    lli suma2=0;

    for(int i=2; i<=k; i++){
        suma2+= (n-i+1)*  pow(9, n-i);
    }

    //cout<< pow(10, n)<<" "<<suma1<<" "<<suma2;

    lli x= pow(10,n);

    cout<<x-suma1-suma2;


    return 0;
}