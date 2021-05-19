#include<bits/stdc++.h>

using namespace std;

unsigned long long int ini=1;
unsigned long long int fin= 10000000000000;



long long int ceros(unsigned long long int& n){
    long long int x=5, res=0;
    int pot=5;
    while(x<=n){
        res+= n/x;
        x*= pot;
    }
    return res;

}


long long int binary(long long int n){

    long long int k;
    unsigned long long int z;

    while ( ini< fin){
        z= ini + (fin - ini )/2;
        k= ceros(z);

        if( k< n ){
            ini= z+1;
            
        }else{

            
            fin= z;
        }


    }



    if( k<= n){
        return fin;
    }

    return fin;


}




int main(){
    
    long long int n;


    cin>> n;

    if(n== 0){
        cout<< 1;
    }else{
        cout<< binary(n);
    }

    
    

    

    return 0;
}