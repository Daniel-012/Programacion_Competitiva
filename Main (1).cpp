#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;



int main(){
    int n;
    int x=0;
    int sum=0;
    vector < int> vec;
    
    cin>>  n;

    for( int i=0; i<n;  i++){
        cin>> x;
        vec.push_back(x);
    }

    sort(vec.begin(), vec.end());
    
    int may = vec[n-1];
            int max=0;
            for( int j=0; j< n; j++){
                if( may == vec[j]){
                max++;
                }
            }


    for(int i=n-1 ; i>=1+max; i--){
            int x = vec[i];
            int c=0;
            for( int j=0; j< n; j++){
                if( x == vec[j]){
                c++;
                }
            }

            if( vec[i] > vec[i-c] ){
               
                sum=sum + vec[i];
                

            }
    }

    cout << sum;





    return 0;
}