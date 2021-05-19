#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    int q;
    int x;
    vector<int> vec;

    cin>> n>> q;

    for( int i=0; i<n;i++){
        cin>> x;
        vec.push_back(x);
    }
    for( int i=0; i<q; i++){
        cin>> x;
        n=0;
    

        while( vec[n-1] != x){

            if( vec[n]== x){
                if(vec[n]== vec[0]){
                    cout<< -1<<" "<<vec[n+1]<< endl;
                }else if( vec[n]== vec[vec.size()-1]){
                    cout<< vec[n-1]<<" "<<-1;
                }else{
                    cout<< vec[n-1]<<" "<<vec[n+1]<< endl;
                }
                
            }
            n++;
        }

    }
    return 0;
}