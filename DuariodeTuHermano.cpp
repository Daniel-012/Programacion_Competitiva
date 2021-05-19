#include<iostream>
#include<string>

using namespace std;

int main(){
    string diario;
    getline(cin, diario);

    int i= diario.size()-1;

    while( i>=0){
        cout<<diario[i];
        i--;
    }



    return 0;
}