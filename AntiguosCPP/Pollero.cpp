#include<iostream>
#include<vector>

using namespace std;

int  cabe2(long int posicion, long int numerodeposicion , long int tamavec, long int bolsa , vector<int> vec ){
    int c=0;
    for( int j=0; j< tamavec; j++ ){
        if( j== numerodeposicion){
            c=c;
        }else{
            if( posicion+ vec[j] <= bolsa ){
                c++;
            }
        }
    }
    return c;
}








int main(){
    long int n;
    long int x;
    long int c=0;
    vector<int> vec;

    cin>> n>> c;
    for( int i=0; i<n; i++){
        cin>> x;
        vec.push_back(x);
    }
    x=c;
    c=0;
    for(int i=0; i<n; i++){
        c= c+ cabe2(vec[i] , i, n ,  x, vec);

    }

    cout<< c;



    return 0;
}

