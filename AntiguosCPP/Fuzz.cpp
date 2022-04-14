#include<bits/stdc++.h>

using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;

    while (cin>> n){
        if( n%3==0 && n%5==0){
            cout<<"FuzzBuzz\n";
        }else if( n%5==0){
            cout<<"Buzz\n";
        }else if( n%3==0){
            cout<<"Fuzz\n";
        }else{
            cout<<n<<"\n";
        }/* code */
    }

    



    return 0;
}