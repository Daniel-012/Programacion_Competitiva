#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int x;
    vector<int>  vec;
    for(int i=0; i<10; i++){
        cin>> x;
        vec.push_back(x);
    }
    sort( vec.begin(), vec.end());

    cout<<vec[0]<<" "<<vec[9]<<" "<< vec[9]-vec[0];




}