#include<bits/stdc++.h>

using namespace std;

vector<string> vec;

void crear(int n){
    string p;

    while( n>=2){
        int c= n%2 +'0';
        p.push_back(c);
        n = n/ 2;
    }
    p.push_back('1');
    vec.push_back(p);
}


int main(){
    int n;
    cin>> n;
    
    int x;
    for(int i=0; i<n; i++){
        cin>> x;
        crear(x);
    }

    for(int i=0; i<n;  i++){
        cout<< vec[i]<<" ";
    }


    return 0;
}



