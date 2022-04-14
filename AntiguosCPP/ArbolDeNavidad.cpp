#include<iostream>

using namespace std;

int main(){
    int n;
    int j;
    cin>>n;

    for( int i=1; i<=n;i++ ){
        j=n-i;
        while(j!=0){
            cout<<" ";
            j--;
        }
        int k=2*i- 1 ;
        while(k!=0 ){
            cout<<"*";
            k--;
        }
        cout<<endl;

    }
    j=n-2;
    while(j!=0){
    cout<<" ";
    j--;
    }
    cout<<"###"<<endl;
        j=n-2;
    while(j!=0){
    cout<<" ";
    j--;
    }
    cout<<"###"<<endl;
    


    return 0;
}