#include<bits/stdc++.h>

using namespace std;



int main(){

    

    long long int a;
    long int j=0;

    cin>> a;

    vector<char> num(a);

    for(long int i=0; i<a; i++){
        cin>> num[i];
        if(num[i]== '1'){
            j++;
        }
    }

    if( j== 1){
        cout<< a-1;
    }else if( j== 2){
        cout<< a;
    }else{
        cout<<a+1;
    }
    


    return 0;
}