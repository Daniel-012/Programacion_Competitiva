#include<bits/stdc++.h>

using namespace std;

int f(vector<int>& vec,  int& x, int ini, int fin){
    while(ini <= fin){
        if(x <= vec[(ini+fin)/2]){
            if(vec[ (ini+fin)/2 ]== x){
                return (ini+fin)/2+1;
            }else{
                fin= (ini+fin)/2-1;
            }

        }else{
            ini=  (ini+fin)/2+1;
        }
    }

    return 0;


}








int main(){
    int n;
    int i;
    int x;

    cin>> n;
    vector<int> vec(n);

    for(i=0; i<n; i++){
        cin>> vec[i];
    }
    cin>> n;
    for(i=0; i<n; i++){
        cin>> x;
        cout<< f(vec, x, 0, vec.size()-1)<<" ";
    }






    return 0;
}