#include<iostream>
#include<vector>

using namespace std;


int main(){
    int n;
    cin>> n;
    vector<int> vec(n);
    for(int i=0; i<n; i++){
        cin>> vec[i];
    }
    cin>> n;
    int c=0;
    for(int i=0; i<vec.size(); i++){
        if(vec[i]== n){
            c++;
        }
    }

    cout<< c;

    return 0;
}