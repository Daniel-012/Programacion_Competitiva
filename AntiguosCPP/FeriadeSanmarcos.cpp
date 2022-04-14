#include<iostream>
#include<vector>

using namespace std;

int main(){
    int p;
    int s;
    int f;
    int c;
    int cd;

    vector<int> vec;

    cin>> c >> p;

    for(int i=0; i<c; i++ ){
        cin>> cd;
        vec.push_back(cd);
    }

    for(int i=0; i<p; i++){
        int sum=0;
        cin>> s>> f;
        for(int j=s-1; j<f; j++){
            sum=sum+vec[j];
        }
        cout<< sum<<endl;
    }



    return 0;
}