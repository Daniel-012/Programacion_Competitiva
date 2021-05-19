#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n;
    int x;
    vector<int> vec= {0};
    cin>> n;
    while( n!=0){
        cin>>x;
        vec.push_back(x);
        n--;
    }
    cin>> n;
    while( n!=0){
        cin>>x;
        if( x==0 || x> vec.size()){
            cout<< 0<<endl;
        }else{
            cout<< vec[x]<<endl;
        }
        n--;
    }


    return 0;
}