#include<bits/stdc++.h>

using namespace std;

int main(){
    int a;
    int x;
    vector<int> numeros;

    cin>> a;
    for(int i=0; i< a; i++){
        cin>>x;
        numeros.push_back(x);

    }
    sort(numeros.begin(), numeros.end());

    if(numeros[a-2]*numeros[a-1]<0){
        cout<< numeros[a-2]*numeros[a-1]*-1;
    }else{

        cout<< numeros[a-2]*numeros[a-1];
    }


    return 0;
}