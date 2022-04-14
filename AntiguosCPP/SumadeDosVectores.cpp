#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n;
    int x;
    vector<int> vec1;

    cin>> n;
    for( int i=0; i<n; i++){
        cin>> x;
        vec1.push_back(x);
    }

    cin>> n;
    
    for( int i=0; i<n; i++){
        cin>> x;
        if( i< vec1.size()){
            x= x+ vec1[i];
            vec1[i]= x;
        }else{
            vec1.push_back(x);
        }
    }
    cout<< "Los elementos del vector resultante son:"<< endl;


    for(int i=0; i< vec1.size(); i++){
        cout<<vec1[i]<<" ";
    }

    return 0;
}