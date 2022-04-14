#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n;
    vector<int> vec;
    cin>> n;
    for( int i=0; i<n; i++){
        vec.push_back(i*2);
    }

    cout<<"{";
    for( int i=0; i<n; i++){
        if( i!=n-1){
            cout<<vec[i]<< ", ";
        }else{
            cout<<vec[i];
        }
    }

    cout<<"}";
    return 0;
}