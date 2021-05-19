#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    int x;
    int y;
    int c=0;
    cin>> n;
    cin>>x;

    for(int i=0; i<n; i++){
        cin>> y;
        if( y== x){
            c++;
        }
    }    

    cout<<c;



    return 0;
}