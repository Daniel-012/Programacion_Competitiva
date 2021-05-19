#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int i=0;

int main(){

    int sum=0;
    int n;
    int x;
    int contador=0;
    vector<int> vec1;
    vector<int> vec2;
    vector<int> vec3;

    cin>> n;

    for(  i=0; i<n; i++){
        cin>> x;
        vec1.push_back(x);
    }
    for( i=0; i<n; i++){
        cin>> x;
        vec2.push_back(x);
    }

    sort( vec1.begin(), vec1.end());
    sort( vec2.begin(), vec2.end());

    i=n-1;
    
    while( vec1[i] <= vec2[ n-1] ){
        n--;
    }

    int j=vec1.size()-1;

    for( i=n-1 ; i>=0 ; i--){

        while(  vec1[j]  == vec2[i]){
            i--;
        }

        if( vec1[j]  > vec2[i]   ){

            sum=sum+vec1[j];

        }
        j--;
    }

    cout<< sum;

    return 0;
}