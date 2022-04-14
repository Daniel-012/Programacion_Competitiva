#include<iostream>
#include<string>

using namespace std;

int main(){
    int n;
    string dario = "abcdefghijklmnopqrstuvwxyz";
    cin>> n;
    string vec;

    int j=1;

    while( j<n  && vec.size()<n ){
        for(int i=0; i<j; i++){
            if(vec.size()<n){
                vec.push_back(dario[j-1]);
            }
            
        }
        j++;
    }

    cout<< vec;

    return 0;
}