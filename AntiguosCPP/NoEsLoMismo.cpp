#include<bits/stdc++.h>

using namespace std;

int main(){
    string cadena;
    getline(cin, cadena);

    int c= 0;
    int x= 0;

    while(cadena[c] != 'l' || cadena[c+1] != 'o' ||  cadena[c+2] != ' ' ||  cadena[c+3] != 'q' || cadena[c+4] != 'u' || cadena[c+5] != 'e' ||  cadena[c+6] != ' '){
        c++;
    }
    x=c;


    for(c= c+7; c<cadena.size(); c++){
        cout<< cadena[c];
    }

    cout<< " lo que ";

    for(c=0; c<x; c++){
        cout<< cadena[c];
    }

    return 0;
}