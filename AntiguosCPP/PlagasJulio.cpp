#include<iostream>

using namespace std;

int plaga( long int n1, long int n2){
    long int i=1;
    int a= max(n1, n2);
    int b= min( n1, n2);
    int suma=0;
    while ( a%b != 0){
        suma= suma + a/b;
        int mod= a%b;
        a=b;
        b= mod;
    }
    return suma+ a/b;


}




int main(){
    int a;
    int b;
    int n;
    cin>> n;
    for(int i=0; i<n; i++){
        cin>> a>> b;
        cout<< plaga(a, b)<<endl;
    }



    return 0;
}