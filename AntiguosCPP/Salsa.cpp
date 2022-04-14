#include<bits/stdc++.h>

using namespace std;


vector<long int> sumas(2000001);
int i=0;
int n;
long int z;

bool se_puede(vector<int>& vec, long int& maxi, int k){

    for(i=k; i<=n; i++){
        if( vec[i]*k - (sumas[i]-sumas[i-k]) <= maxi){
            z= vec[i];
            return true;
        }

    }


    return false;
}


void salsa(vector<int>& vec,int ini, int fin, long int& maxi){
    int mitad;

    while(ini< fin){
        mitad= ini+(fin-ini)/2;
        if( se_puede(vec, maxi, mitad)){
            ini= mitad+1;
        }else{
            fin=  mitad;
        }
    }


    cout<< mitad<<" "<<z;
    return;

}





int main(){

    long int k;

    cin>> n>> k;

    vector<int> vec(n+1);

    for(i=1; i<=n; i++){
        cin>> vec[i];
        

    }

    sort(vec.begin(), vec.end());

    for(i=1; i<=n; i++){
        sumas[i]= vec[i]+sumas[i-1];
    }

    salsa(vec, 1, n, k);
    


    return 0;
    }