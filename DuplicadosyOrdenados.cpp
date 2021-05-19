#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main( ){
    int n;
    int x;
    int c=0;
    vector<int> vec;
    cin>> n;

    for(int i=0; i<n; i++){
        cin>> x;
        if( x<0){
            c++;
        }
        vec.push_back(x);
    }
    if( c==0){
        sort(vec.begin(), vec.end());
        for( int i=0; i<n; i++){
            if( vec[i]!= vec[i+1]){
                cout<< vec[i]<<endl;
            }
        }



    }




    return 0;
}