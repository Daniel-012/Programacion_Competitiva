#include<bits/stdc++.h>

using namespace std;

typedef unsigned long long int lli;
int i;

lli maximus( vector<lli>& vec){
    lli dan=0;
    int j;
    lli  actual;
    int a=0, d=0; 
    for(i=0; i< vec.size(); i++){
        a=1;
        d=0;
        j=i-1;
        actual= vec[i];
        while( actual<= vec[j] && j>=0){
            j--;
            a++;
        }
        j= i+1;
        while( actual<= vec[j] && j<vec.size()){
            j++;
            d++;
        }
        if( (a+d) * actual >= dan ){
            dan= (a+d) * actual;
            
        }
    }


    return dan;

}





int main(){
    int n;
    cin>> n;

    vector<lli> vec(n);

    for(i=0; i<n; i++){
        cin>>vec[i];
    }

    lli maxi= maximus( vec);

    cout<<maxi;
    


    return 0;
}