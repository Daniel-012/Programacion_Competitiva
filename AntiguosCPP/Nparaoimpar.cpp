#include<bits/stdc++.h>

using namespace std; 

int main(){
    long long int b;
    long long int e;
    long long int n;
    long long int s=0;
    long long int f;

    cin>> b>> e;
    f=e;
    for(int i=1; i<= e; i++){
        cin>> n;
        f--;
        if(f== 1){
            s=s+ n* b;
        }else if(f == 0){
           s=s+ n* 1; 
        }else{
            s=s+ n* pow( b, f);
        }
       cout<<s<<"\n";

    }


    if( s%2==0){
        cout<<"par";
    }else{
        cout<< "impar";
    }


    cout<<" "<<s;


    return 0;
}