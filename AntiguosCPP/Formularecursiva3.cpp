#include<iostream>

using namespace std;

long long int  funcionrelativa( long long int x){
    if( x<= 5){
        cout<< 1<<endl;
        return 1;
    }else{
        long long int resultado = funcionrelativa(x -2)* 5;
        cout<< resultado<<endl;
        return  resultado;
    }
}





int main(){
    long long int n;
    cin>> n,
    funcionrelativa(n);




    return 0;
}