#include<iostream>

using namespace std;

void suma(long long int l, long long int r){
    long long int s=0;
    for(long long int i=l; i<=r; i++){
        long long int b=i;
        while(b>0){
            s=s+ b%10;
            b=b/10;
        };
    }

cout<< s<<endl;



}



int main(){
     int n;
    long long int l;
    long long int r;

    cin>> n;

    for(int i=1; i<=n; i++){
        cin>>l>> r;
        suma(l,r);
    }







    return 0;
}