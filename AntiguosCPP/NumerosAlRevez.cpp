#include<iostream>

using namespace std;

int main(){
    int n;
    int i=0;
    cin>> n;
    for( i=0; i<n; i++ ){
        int x;
        cin>> x;
        while( x!=0){
        cout<< x%10<<" ";
        x=x/10;
    }
    cout<<endl;
    }




    return 0;
}