#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    for(int j=1; j<=n; j++){
        for(int i=1; i<=j; i++){
            cout<<j;
        }
        cout<<endl;
    }
    for(int j=n-1; j>=1; j--){
        for(int i=j; i>=1; i--){
            cout<<j;
        }
        cout<<endl;
    }




    return 0;
}