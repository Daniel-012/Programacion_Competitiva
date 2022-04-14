#include<bits/stdc++.h>

using namespace std;

int dani( vector<double>& vec, int inicio, int fin , double x ){
    while(inicio<= fin){
        if( x <= vec[(inicio+fin)/2] ){
            if( x == vec[(inicio+fin)/2]){
                return 0;
            }else{
                fin= (inicio+ fin)/2-1;
            }
        }else{
            inicio= (inicio+ fin)/2+1;
        }
    }
    return 1;
}







int main(){
    int n,k;
    cin>> n>> k;
    vector< double > vec(n);
    long long int x;
    long long int y;

    while(n!= 0){
        cin>> x>> y;
        vec[n-1]= log(x)+ y;
        n--;
    }

    sort(vec.begin(), vec.end());

    for(int i=0; i<k; i++){
        cin>> x>> y;
        cout<< dani(vec,0, vec.size(), log(x)+y)<<"\n";

        
    }


    return 0;
}