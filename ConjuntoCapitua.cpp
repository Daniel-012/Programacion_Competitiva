#include<iostream>
#include<vector>

using namespace std;

bool comprueba( vector<int> vec, int n){
    for(int i=0; i<n/2; i++){
        if( vec[i]!= vec[n-i-1]){
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    int x;
    vector<int> vec;
    cin>> n;
    for(int i=0; i<n; i++){
        cin >> x;
        vec.push_back(x);
    }
    if( comprueba( vec, n)){
        cout<<"SI";
    }else{
        cout<<"NO";
    }



    return 0;
}