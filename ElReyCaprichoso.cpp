#include<iostream>
#include<vector>

using namespace std;

int mcd( int n1, int n2){
    int mcd=0;
    int a= max( n1, n2);
    int b= min( n1, n2);
    do{
        mcd= b;
        b= a%b;
        a= mcd;
    }while( b!= 0);
    return mcd;
    
}


int mcm( int a, int b){
    int mcm=0;
    int ma= max( a, b);
    int mi= min(a , b);
    mcm= ( ma/mcd(ma,mi))*mi; 
    return mcm;

}


int mcm1( vector<int> vec , int max, int mix){
    
    for( int i=0; i< vec.size()-1; i++){
        for(int j=i+1; j<vec.size(); j++){
            if( mcd(vec[i], vec[j] )>= max){

                if(mcm(vec[i], vec[j] ) >= mix ){

                mix= mcm(vec[i], vec[j] ) ;
                
                }
            }
        }
        
    }

    return mix;

}




int main(){
    int n;
    cin>>n;
    vector<int> vec(n);
    for( int i=0; i<n; i++){
        cin>> vec[i];
    }
    int maximo= -1000;
    int mix;
    for( int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
        if( mcd( vec[i], vec[j])>=  maximo){
            maximo= mcd( vec[i], vec[j]);
            mix = mcm( vec[i], vec[j]);
        }
        }
        
    }

    int d = mcm1(vec, maximo,mix);

    cout<< d;

    return 0;
}