#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    int i;
    int x;

    cin>> n;
    vector<int> vec(n);

    for(i=0; i<n; i++){
        cin>> vec[i];
    }
    map<int, int> otrovec;
    for(int i=0; i<vec.size(); i++){
        otrovec[vec[i]]++;
    }


    cin>> n;
    for(i=0; i<n; i++){
        cin>> x;
        cout<< otrovec[x]<<" ";
    }




    return 0;
}