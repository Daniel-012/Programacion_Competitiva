#include<bits/stdc++.h>


using namespace std;



int main(){


    int n;
    int x;
    int i=0;
    int sum=0;
    int contador=0;



    cin>> n;

    vector<int> vec1(n);
    vector<int> vec2(n);

    for(  i=0; i<n; i++){
        cin>> vec1[i];
    }
    for( i=0; i<n; i++){
        cin>> vec2[i];
    }

    sort( vec1.begin(), vec1.end());
    sort( vec2.begin(), vec2.end());

    i=n-1;
    
    while( vec1[i] <= vec2[ n-1] ){
        n--;
    }

    int j=vec1.size()-1;

    vector<int> vec3;

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