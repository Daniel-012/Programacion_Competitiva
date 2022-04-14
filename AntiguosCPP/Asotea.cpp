#include<bits/stdc++.h>

using namespace std;
vector<long int> vec(100000);

int cuenta( int x, int t){
    int i=x;
    int j=x+1;
    int ants=0;
    int des=0;
    while( i>=0 && vec[i]< vec[x]){
        i--;
        ants++;

    }
    while( j< t && vec[j]< vec[x]){
        j++;
        des++;

    }


return ants+des;


}









int main(){
    int n;
    cin>>n;

    for(int i=0; i<n; i++){
        cin>> vec[i];
    }
    for(int i=0; i<n; i++){
        cout<< cuenta(i, n)<<" ";
    }




    return 0;
}