#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    int i=0;
    int c=0;
    cin>> n;
    vector<int> vec(n);

    for(i=0; i<n; i++){
        cin>> vec[i];
    }
    int a;
    int b;

    cin>> a>> b;

    sort( vec.begin(), vec.end());
    i=0;
    while(vec[i]<= b){
        if(vec[i]>= a && vec[i]<= b){
            c++;
            
        }
        i++;
    }


    cout<< c;


    return 0;
}