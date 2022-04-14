#include<bits/stdc++.h>

using namespace std;

vector<int> todos;

void sumas( int pos, int suma, vector<int>& vec, int ob){
    if( suma>= ob){
        todos.push_back( suma);
    }
    if ( pos>= vec.size()){
        return ;
    }

    sumas(pos+1, suma, vec, ob);
    sumas(pos+1, suma + vec[pos], vec, ob);

}




int main(){
    int n;
    int x;
    cin>> n>> x;
    vector<int> vec(n);
    for(int i=0; i<n; i++){
        cin>> vec[i];
    }
    
    sumas( 0, 0, vec, x);

    sort(todos.begin(), todos.end());

    for(int i=0; i<todos.size(); i++){
        if( todos[i]!= todos[i+1]){
            cout<< todos[i]<<" ";
        }
            
    }




    return 0;
}