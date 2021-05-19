#include<iostream>
#include<vector>
#include<algorithm>


using namespace std;

bool comprobar( vector<int> vec, int n){
    int i=0;
    int c=0;
    while( c<=1 && i <n-1){
        if( vec[i] == vec[i+1]){
            c++;
        }
        i++;
    }
    if( c>=2){
        return true;
    }else{
        return false;
    }
}



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
    
    for(  i=1; i<n-1; i++){
        if( vec[i]< vec[ i+1]){

       x=x+vec[i];
        }
    }
    if( comprobar( vec, n)){
        cout<< x+vec[n-1]-1;
    }else{
        cout<< x+vec[n-1];
    }
   




    return 0;
}