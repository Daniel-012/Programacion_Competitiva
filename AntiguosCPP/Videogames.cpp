#include<iostream>
#include<vector>

using namespace std;

void mostrar( int n, vector<int> vec){
    int i=0;
    int c=0;
    while(vec[i]!= n && i<vec.size()){
        i++;
        c++;
    }
    if( c== vec.size()){
        cout<<-1<<" ";
    }else{
    cout<< i<<" ";
    }
}


int main(){
    int n;
    int n2;
    int i;
    int x;
    vector<int> vec;
    cin>> n>>  n2;
    for(i=0; i<n; i++){
        cin>> x;
        vec.push_back(x);
    }
    for(i=0; i<n2; i++){
        cin>>x;
        mostrar(x, vec);
    }



    return 0;
}