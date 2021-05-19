#include<iostream>

using namespace std;

int main(){
    int n;
    cin>> n;
    int n1=1;
    int n2=5;

    cout<< n1<< " "<< n2<<" ";


    for(int i=1; i<n; i++){
        cout<< n1+2<< " "<<n2+2<< " ";
        n1= n1+2;
        n2= n2+2;
    }





    return 0;
}