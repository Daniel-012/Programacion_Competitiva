#include<bits/stdc++.h>

using namespace std;

int main(){
    string palabra;
    getline(cin, palabra);
    int n= palabra.size()-1;
    int j=0;
    for(int i=n; i!=-1; i--){

        cout<< palabra[j];
        int c= i*2;
        while(c!=0){
            cout<<" ";
            c--;
        }
        cout<< palabra[j]<<"\n";
        for(int c=0; c<= j; c++){
            cout<< " ";
        }
        j++;
    }



    return 0;
}