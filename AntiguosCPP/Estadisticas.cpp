#include<iostream>
#include<vector>

using namespace std;

long int f( vector<int> vec, long int a, long int b){
    long int suma=0;
    for(a; a< b; a++){
        suma = suma+ vec[a];
    }
    return suma;
}





int main(){
    long int n;
    cin>> n;
    vector<int> vec(n);
    for(int i=0; i<n; i++){
        cin>> vec[i];
    }
    long int m;
    cin>> m;
    int a;
    int b;
    for(int i=0; i<m; i++){
        cin>> a>> b;
        cout<<f(vec, a-1, b-1)<< endl;
    }





    return 0;
}