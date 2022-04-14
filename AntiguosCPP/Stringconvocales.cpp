#include<iostream>
#include<string>

using namespace std;

int main(){
    int a=0;
    int e=0;
    int j=0;
    int o=0;
    int u=0;
    string oracion;
    char x;

   getline(cin,oracion);
    for(int i=0; i<oracion.size(); i++){
        if(oracion[i]== 'a' ||oracion[i]== 'A' ){
                a++;
        }else  if(oracion[i]== 'e' ||oracion[i]== 'E' ){
                e++;
        }else  if(oracion[i]== 'i' ||oracion[i]== 'I' ){
                j++;
        }else  if(oracion[i]== 'o' ||oracion[i]== 'O' ){
                o++;
        }else  if(oracion[i]== 'u' ||oracion[i]== 'U' ){
                u++;
        }
    }

    cout<<a<<" "<<e<<" "<<j<<" "<<o<<" "<<u;



    return 0;
}
