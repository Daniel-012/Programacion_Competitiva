#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    int k;
    cin>>  n>> k;
    long int sumamax= -1000000000;

    vector<int> vec(n);

    for(int i=0; i<n; i++){
        cin>> vec[i];

    }




    for(int i=0; i+k<= n; i++){
        int suma=0;;
        for(int j=i; j<i+k-1; j++ ){
            
            suma= suma+  vec[j+1] -vec[j];
           

           
        }
        if( suma>= sumamax){
            sumamax= suma;
        }
    }

    cout<< sumamax;

    return 0;
}