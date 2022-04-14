#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n;
    int k;
    int x;
    vector<int> vec;
    cin>> n>> k;
    for( int i=0; i<n; i++){
        cin>> x;
        vec.push_back(x);
    }
    if( k<= n){
        cout<<vec[k-1];
    }else{
        cout<<vec[(k%n)-1];
    }






    return 0;
}