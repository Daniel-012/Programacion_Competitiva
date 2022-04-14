#include<iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int m;
    int n;

    cin>>m;

    for(int j=0; j<m; j++){
        cin>> n;
        for(int i=1; i<=n; i++ ){
            cout<<"<3";
        }
        cout<<endl;
    }



    return 0;
}