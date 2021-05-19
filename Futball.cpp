#include<bits/stdc++.h>

using namespace std;

int main(){
    string palabra;
    cin>> palabra;
    int c=1;
    bool peligr= false;

    for(int i=0; i<palabra.size()-1; i++){
        c=1;
        while ( palabra[i]== palabra[i+1]){
            c++;
            i++;
        }

        if( c>=7){
            peligr= true;
        }
        
    }

    if(peligr){
        cout<<"YES";
    }else{
        cout<<"NO";
    }


    return 0;
}