#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    long int x;
    int c=0;
    vector<int> tabla;
    vector<int> cofre;

    for(c=0; c<3; c++){
        cin>> x;
        tabla.push_back(x);
    }
    sort(tabla.begin(), tabla.end());
        for(c=0; c<3; c++){
        cin>> x;
        cofre.push_back(x);
    }
    sort(cofre.begin(), cofre.end());
    c=0;

    for( int i=0; i<3; i++){
        if( cofre[i]>= tabla[i]){
            c++;
        }
    }

    if(c== 3){
        cout<<1;
    }else{
        cout<<0;
    }




    return 0;
}