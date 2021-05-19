#include<iostream>
#include<vector>

using  namespace std;

int main(){
    int n;
    cin>> n;
    vector<long int> vec(n);
    for(int i=0; i<n; i++){
        cin>> vec[i];
    }
    int c=0;
    int max=0;
    for(int i=0; i<n-1; i++){
        if( vec[i+1]< vec[i]){
            c=1;
            while(vec[i+1]< vec[i] && i< n-1 ){
                c++;
                i++;
            }
            if( c>= max){
                max=c;
            }
        }
        
    }
    cout<< max;


    return 0;
}