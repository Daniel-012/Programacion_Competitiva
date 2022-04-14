#include<iostream>
#include<vector>

using namespace std;

int main(){
    char x;
    int n;
    int c=0;
    vector<int> vec;
    cin>> n;
    int i=0;
    for(i=0;  i<n; i++){
        cin>> x;
        vec.push_back(x);
    }
    int j=n/2;
    n=n-1;
    i=0;
    while( i<j){
        if( vec[i]!= vec[n]){
            c++;
        }
        n--;
        i++;
    }

    if( c==0){
        cout<<"SI";
    }else{
        cout<< "NO";
    }



    return 0;
}