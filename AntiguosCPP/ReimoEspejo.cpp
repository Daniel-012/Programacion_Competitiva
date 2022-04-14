#include<iostream>
#include<string>

using namespace std;

int main(){
    string pala;
    getline(cin, pala);
    for( int i=pala.size()-1; i>=0; i--){
        cout<<pala[i];
    }


    return 0;
}