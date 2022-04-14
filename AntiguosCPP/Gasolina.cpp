#include<bits/stdc++.h>

using namespace std;

typedef long long int lli;

void f( vector <lli>& vec, int x, int inicio, int fin){
    while(inicio<= fin){
        if(x <= vec[(inicio+fin)/2] ){
            if(x>=  vec[((inicio+fin)/2)]  && x-vec[((inicio+fin)/2)+1]  <0   ){

                cout<< ((inicio+fin)/2)+1<<" "<<  x-vec[((inicio+fin)/2)] ;
                break;

            }else{
                fin= (inicio+fin)/2-1;
            }
        }else{
            inicio= (inicio+fin)/2+1; 
        }
    }





}







int main(){

    int n;
    int k;
    cin>> n>> k;
    vector <lli> vec;
    int x;
    lli suma=0;
    while(k!=0){
        cin>> x;
        suma= suma+x;
        vec.push_back(suma);
        k--;
    }

    while(n!=0){
        cin>> x;
        f(vec, x, 0, vec.size()-1 );
        cout<<"\n";
        n--;
    }



    return 0;
}