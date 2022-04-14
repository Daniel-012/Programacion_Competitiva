#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    long long int a;
    long long int b;
    unsigned long long int sum=0;

    cin>>a>>b;

    for(long long int i=a; i<=b; i++){
        sum+=i;
    }

    cout<<sum;



    return 0;
}