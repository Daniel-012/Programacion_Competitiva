#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n;
    int a;
    int x;
    vector <int> vec;
    cin>> n;
    for(int i=0; i<n; i++){
        cin>> x;
        vec.push_back(x);
    }
    cin>> a;

    for(int i=0; i< n-a; i++){
        cout<<vec[i]<<" ";
    }


    return 0;
}