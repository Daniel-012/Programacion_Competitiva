#include<iostream>
#include<vector>

using namespace std;

long int funcion( vector<int> vec, long int in, long int f ){
    long int suma=0;
    for( int i=in; i<f; i++){
        suma= suma+ vec[i];
    }
    return suma;
}




int main() {
    long int n;
    long int c;

    cin>> n>> c;

    vector<int> vec(n);

    for(int i=0; i<n; i++){
        cin>> vec[i];
    }
    int i=0;
    while( c+i< n || c+i!= n ){
        cout<< funcion(vec,i, c+i )<<" ";
        i++;
        
    }
    cout<<funcion(vec,i, c+i )<<" ";



    return 0;
}