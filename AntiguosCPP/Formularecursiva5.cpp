#include<iostream>

using namespace std;

long long int f( long long int n, long long int m){
    if ( n== 1){
        return -1 * f( n-2, m);
    }else if( n>3){
        return 2 + f( n-1, m);
    }else{
        return 2* m;
    }
    

}




int main(){
    int n;
    int m;
    cin>> n>> m;
    cout<< f( n, m);



    return 0;
}