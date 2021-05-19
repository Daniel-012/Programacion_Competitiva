#include<iostream>
#include<string>

using namespace std;

int main(){
    int c=0;
    string palabra;
    getline(cin, palabra);

    for(int i=0; i<palabra.size(); i++){
        if( palabra[i]== '('){
            c=0;
            i++;
            int x=0;
            while( palabra[i]!= ')' && c== 0){
                if(palabra[i]== '('){
                    c++;
                    i++;
                }
                if(palabra[i]== ')'){
                    c--;
                    i++;
                }
                x++;;
                i++;
            }

        }else{
            cout<< palabra[i];
        }
    }




    return 0;
}