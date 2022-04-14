#include<iostream>

using namespace std;

int main(){
    int n;
    cin>> n;
    for(int i=1; i<=n; i++){
        int j=i; 
        int y=n-i;
        while( y!=0){
            cout<<" ";
            y--;
        }
        while( j!=0){
            cout<<"* ";
            j--;
        }
        cout<<endl;




    }




    return 0;
}