#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>> n;
    vector<int> vec;
    vector<bool> esprimo(n+1, true);
    esprimo[0]= false;
    esprimo[1]= false;
    for(int i=2; i<n; i++){
        if( esprimo[i]){
            vec.push_back(i);
            for( int j= i; j<n; j+= i){
                esprimo[j]= false;
            }
        }
        

    }

    for(int i=0; i<vec.size(); i++){
        cout<<vec[i]<<" ";
    }







    return 0;
}