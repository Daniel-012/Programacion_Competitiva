#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n;
    int x;
    vector<int> vec;
    cin>> n;
    while( n!=0){
        cin>> x;
        vec.push_back(x);
        n--;
    }
    n=vec.size();
    while( n!=0){
        cout<<vec[n-1]<<" ";
        n--;
    }




    return 0;
}