#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    int x;
    cin>>n;
    int a = n / 2;

    long long int sum1=0;
    long long int sum2=0;

    for(int i=0; i<a; i++){
        cin>> x;
        sum1+= x;
    }

    for(int i=a; i<n; i++){
        cin>> x;
        sum2+= x;
    }


    if(sum1== sum2){
        cout<<sum1<<" "<<1;
    }else{
        cout<<sum1+sum2<<" "<<0;
    }







    return 0;
}