#include<bits/stdc++.h>

using namespace std;
typedef long long int lli;

lli recur(lli n){
    if( n<= 5){
        return 1;
    }

    return recur(n-2)*5;

}

int main(){
    lli n;
    cin>> n;
    cout<<recur(n);



    return  0;
}