#include<iostream>
#include<vector>

using namespace std;

int main(){
    long int a;
    long int b;
    cin>> a>> b;
    vector<int> vec(a);
    for(long int i=0; i<a; i++){
        cin>> vec[i];
    } 

    long int sc= 0;

    for(long int i=0; i<a; i++){
        sc= 0;
        long int c=0;
        long long int suma=0;
        while(suma<= b){
            suma= suma+ vec[i];
            c++;
        }
        if(c>=sc){
            sc= c;
        }
    }

    cout<< sc;

    return 0;
}