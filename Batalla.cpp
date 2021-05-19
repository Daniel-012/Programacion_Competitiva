#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int n;
    int x;
    int i=0;
    vector < int> vec;
    
    cin>>  n;

    for(  i=0; i<n;  i++){
        cin>> x;
        vec.push_back(x);
    }
    sort(vec.begin(), vec.end());
    
    x=0;
    i=0;
    int c=0;
    
    for(  i=0; i<n; i++){
        if( vec[i] >= vec[n-i-1]){
            if(vec[i] == vec[n-i-1] ){
            if( c<1){
                x=x+vec[i];
                c++;
            }
            }else{
                 x=x+vec[i];
            }
        }
    }

    cout<< x;




    return 0;
}