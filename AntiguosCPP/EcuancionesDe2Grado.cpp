#include<iostream>
#include<cmath>

using namespace std;

int formula1( int a, int b, int c){
    int resul;
    resul= sqrt((pow( b, 2))- (4 *a*c));
    int resul1= (-b - resul)/ 2*a;  

    return resul1;


}

int formula2( int a, int b, int c){
    int resul;
    resul= sqrt((pow( b, 2))- (4 *a*c));
    int resul1= (-b + resul)/ 2*a;  

    return resul1;


}




int main(){
    int a;
    int b;
    int c;
    cin>> a>> b>> c;

    if( formula1(a,b,c)<=formula2(a,b,c) ){
        cout<< formula1(a,b,c)<<endl<<formula2(a,b,c);

    }else{
        cout<<formula2(a,b,c) <<endl<<formula1(a,b,c);

    }

    




    return 0;
}