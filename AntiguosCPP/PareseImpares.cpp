#include<iostream>

using namespace std;

int main(){
    int n;
    int x;
    cin>>n;
    int par=0;
    int impar=0;
    while(n!=0){
        cin>> x;
        if(x%2==0){
            par++;
        }else{
            impar++;
        }
        n--;
    }

    cout<<par<<" "<<impar;

    return 0;
}