#include<bits/stdc++.h>

using namespace std;
int n;
int v;
int j=0;
int p;
vector<int> vec(1000000);
vector<int> ant(1000000);


void combina(int& x){
    p--;
    for(j=x; j<n; j++){
        vec[j]= ant[p];

        p--;
    }
    ant= vec;

}


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int x;
    

    cin>> n>> v;


    for(int i=0;i<n; i++ ){
        vec[i]= i+1;
    }
    ant= vec;
    
    
    for(int i=0; i<v; i++){
        p=n;
        cin>> x;
        x--;
        combina(x);
        
    }



    for(int i=0;i<n; i++ ){
        cout<<ant[i]<<" ";
    }



    return 0;
}