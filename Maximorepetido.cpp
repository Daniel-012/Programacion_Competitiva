#include<iostream>
#include<vector>

using namespace std;

int main(){
    int max=-100;
    int n;
    int x;
    vector<int> vec;
    int c=0;
    cin>> n;
    for(int i=0;i<n; i++){
        cin>>x;
        vec.push_back(x);
        if( x >= max){
            max=x;
        }
    }
    for(int i=0; i<n;  i++){
        if( vec[i]== max){
            c++;
        }
    }

    cout << c;


    return 0;
}