#include<iostream>
#include<vector>
#include<cmath>

using namespace std;

bool esprimo( int n){
    for( int i=2; i <= sqrt(n) ; i++){
        if( n %i==0){
            return false;
        }
    }
    return true;
}



int main(){
    int n;
    int c=0;
    vector<int> vec;
    cin>> n;
    for( int i=2; i<n; i++){
        if( esprimo(i)){
            c++;
            vec.push_back(i);
        }
    }

    cout<< "Hay "<<c<< " numeros primos. Los cuales son: "<<endl;
    for( int i=0; i<vec.size(); i++){
        cout<< vec[i]<< " ";
    }




    return 0;
}