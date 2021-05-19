#include<iostream>
#include<string>

using namespace std;

int main(){
    int a=0;
    int e=0;
    int j=0;
    int o=0;
    int u=0;
    char x;

 
    while( getchar() != 10 ){

        cin>> x;

        if(x == 'a' || x== 'A' ){
                a++;
        }else  if(x== 'e' ||x== 'E' ){
                e++;
        }else  if(x== 'i' ||x== 'I' ){
                j++;
        }else  if(x== 'o' ||x== 'O' ){
                o++;
        }else  if(x== 'u' ||x== 'U' ){
                u++;
        }
    }


    cout <<a<<" "<<e<<" "<<j<<" "<<o<<" "<<u;



    return 0;
}
