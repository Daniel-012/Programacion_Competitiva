#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>> n;

    int a= n/3;
    int b= (n-a)/2;
    
    cout<< a<<" "<<b<<" "<<n- (a+b);




    return 0;
}