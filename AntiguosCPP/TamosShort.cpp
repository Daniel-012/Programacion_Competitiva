#include<iostream>
#include<vector>

using namespace std;

vector<int> vec;

int  f(int inicio, int fin){
    int c=0;
    for(int i=inicio; i<fin-1; i++){
        if(vec[i]<=vec[i+1]){
            c++;
        }else{
            inicio= (inicio+fin)/2;

            return f(inicio, fin);
        }
    }
    cout<< c + 1;
    return c;
}


int main(){
    int n;

    cin>> n;
    int x;
    for(int i=0; i<n; i++){
        cin>> x;
        vec.push_back(x);
    }

    f(0, n);



    return 0;
}