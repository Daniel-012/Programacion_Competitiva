#include<iostream>

using namespace std;

bool reactifica(long int x, long int k){
    for(int j=2; j<k; j++){
            if(x % j == 0  ){
            return false;
            }       
        }
    return true;
    
}


int main(){

    long  int a;
    long int b;
    long int k;
    int c=0;
    cin>>a>> b>> k;


    for(int i=a; i<=b; i++){
        if(i % k == 0 && reactifica(i,k)){
            c++;
        }
    }
   

    cout<<c<< endl;


    return 0;
}

