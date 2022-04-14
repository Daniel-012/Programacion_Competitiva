#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    int k;
    cin>> n>> k;
    vector<long int> vec(n);

    for(int i=0; i<n; i++){
        cin>> vec[i];
    }

    long int min;
    long int j=0;
    long int z;
    sort(vec.begin(), vec.end());

    for(int i=0; i<k; i++){
        while (vec[j] == 0 && j<=n){
            j++;
        }

        min= vec[j];
        if( j == n){
            cout<< 0<<"\n";
        }else{
            cout<<min<<"\n";
            for(z= j; z<n; z++){
            vec[z]-= min;
            if( vec[z]<=0){
                vec[z]=0;
            }
        }
        }
        

        
        

    }



    return 0;
}