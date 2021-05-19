#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;



int main(){
    int n;
    int x=0;

    vector < int> vec;
    
    cin>>  n;

    for( int i=0; i<n;  i++){
        cin>> x;
        vec.push_back(x);
    }

    sort(vec.begin(), vec.end());

    int j=1;
    int s=0;


    for( int i=n-1; i>=1; i--){

        while( vec[i]== vec[i-j]){
            j++;
        }

        if(vec[i] > vec[i-j] &&  vec[i-j] >=1  ){
            s=s+vec[i];

        }

    }

    cout<< s;

    return 0;
}