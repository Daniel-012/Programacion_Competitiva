#include<bits/stdc++.h>

using namespace std;

vector<string> teclas= { "0 ", "1.", "2abc","3def","4ghi","5jkl","6mno","7pqrs","8tuv","9wxyz" };

vector<string> teclasM= { "0 ", "1.", "2ABC","3DEF","4GHI","5JKL","6MNO","7PQRS","8TUV","9WXYZ" };





int main(){
    string secu;

    getline( cin, secu);

    int x=0;
    bool ua= true;
    int z;
    int pos;
    for(int i=0; i<secu.size(); i++){
        z= i;
        x=0;
        if( secu[i]== '#'){
            if( ua== true){
                ua= false;
            }else{
                ua= true;
            }
            continue;
        }

        if( secu[i]== ' '){

            continue;

        }else{

            if( ua== true){
                
                while( secu[z]== secu[i+1] && i<secu.size()-1){
                i++;
                x++;
                }
            
                pos= secu[z]-'0';
                string actual= teclasM[pos];

                cout<< actual[x%actual.size()];
                    

            }else{
            while( secu[z]== secu[i+1] && i<secu.size()-1){
                i++;
                x++;
            }
            pos= secu[z]-'0';
            string actual= teclas[pos];

            cout<< actual[x%actual.size()];
                
            }
            
        }
    }




    return 0;
}