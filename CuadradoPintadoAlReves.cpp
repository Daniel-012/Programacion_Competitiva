#include<iostream>
#include<vector>
#include<cmath>


using namespace std;

int main(){
    int n;
    int x;
    vector<int > vec;

    cin>> n;

    while( n!=0){
        cin>> x;
        vec.push_back(x);

        n--;
    }

    for( int i=vec.size()-1; i>=0; i--){
        cout<<pow( vec[i], 2)<<endl;
    }


    return 0;
}