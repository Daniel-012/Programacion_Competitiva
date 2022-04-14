#include<bits/stdc++.h>

using namespace std;

long long int re(string& cali, long long int& i ){
    long int suma=0;
    int c=0;
    int n= cali[i];
    while( cali[i]!= ')'){
        if(cali[i] != '('){

            n= cali[i]-48;

            suma= suma+n;
            i++; 
            c++;
            
        }else{
            i++;
            suma=  suma+(re(cali, i));
            c++;
            i++;
        }
       
    }

    return suma/c;
}





int main (){
    long long int i=1;
    string calificaciones;
    cin>> calificaciones;

    cout<< re(calificaciones, i);




    return 0;
}