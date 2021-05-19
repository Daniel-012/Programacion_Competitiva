#include<iostream> 
#include<vector>
#include<iomanip>
#include<algorithm>

using namespace std;

int main(){

    int n;
    float x;
    vector<float> vec;
    cin>> n;
    if ( n%2== 0){
         for(int i=0 ; i<n; i++){
            cin>> x;
            vec.push_back(x);
        }
        sort(vec.begin(), vec.end());

        cout<<fixed<< setprecision(1)<< (vec[n/2-1]+vec[n/2]) /2;

    }else{
        for(int i=0 ; i<n; i++){
            cin>> x;
            vec.push_back(x);
        }
        sort(vec.begin(), vec.end());

        cout<< vec[n/2]<< ".0";
    }





    return 0;
}