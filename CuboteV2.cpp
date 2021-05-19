#include<bits/stdc++.h>

using namespace std;

int main(){
    long int n;
    cin>> n;

    vector<long int> vec(6);

    for(int i=0; i<6; i++){
        cin>> vec[i];
    }
    sort(vec.begin(), vec.end());
    long long int mini= vec[0];
    long long int medi= vec[1];
    long long int maxi= vec[2];

    long long int sumamax= maxi*n*n;
    long long int sumamedia= medi* 4;
    long long int sumamin= (n*4-4)* mini;

    long long int x=  sumamax+ (sumamedia+sumamin)*n;

    mini= vec[1];
     medi= vec[2];
     maxi= vec[0];

     sumamax= maxi*n*n;
     sumamedia= medi* 4;
     sumamin= (n*4-4)* mini;

    long long int y=  sumamax+ (sumamedia+sumamin)*n;

    mini= vec[2];
     medi= vec[0];
     maxi= vec[1];

     sumamax= maxi*n*n;
     sumamedia= medi* 4;
     sumamin= (n*4-4)* mini;

    long long int z=  sumamax+ (sumamedia+sumamin)*n;

    mini= vec[2];
     medi= vec[1];
     maxi= vec[0];

     sumamax= maxi*n*n;
     sumamedia= medi* 4;
     sumamin= (n*4-4)* mini;

    long long int a=  sumamax+ (sumamedia+sumamin)*n;

    mini= vec[0];
     medi= vec[2];
     maxi= vec[1];

     sumamax= maxi*n*n;
     sumamedia= medi* 4;
     sumamin= (n*4-4)* mini;

    long long int b=  sumamax+ (sumamedia+sumamin)*n;

    long long int minimode=  min(a, b);

    minimode= min(minimode, x);

    minimode= min(minimode, y);

    minimode= min(minimode, z);


    cout<< minimode;





    return 0;
}