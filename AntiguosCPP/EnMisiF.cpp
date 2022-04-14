#include<bits/stdc++.h>

using namespace std;


int main(){
    //ios_base::sync_with_stdio(0);
    //cin.tie(0);
    char x;
    stack<char> pila;

    while(cin>>x){
        if(!pila.empty()){
            if( pila.top()=='('){
                if( x== ')'){
                    pila.pop();
                }else{
                    if(x=='('|| x== ')' ||x=='{'|| x== '}' ||x=='['|| x== ']' ){
                        pila.push(x);
                    }
                }
            }else if( pila.top()=='{'){
                if( x== '}'){
                    pila.pop();
                }else{
                    if(x=='('|| x== ')' ||x=='{'|| x== '}' ||x=='['|| x== ']' ){
                        pila.push(x);
                    }
                }
            }else if( pila.top()=='['){
                if( x== ']'){
                    pila.pop();
                }else{

                    if(x=='('|| x== ')' ||x=='{'|| x== '}' ||x=='['|| x== ']' ){
                    pila.push(x);
                    }
                }
            }

        }else{
            if(x=='('|| x== ')' ||x=='{'|| x== '}' ||x=='['|| x== ']' ){
                pila.push(x);
            }
        }
    }

    if( pila.empty()){
        cout<<"correcto";
    }else{
        cout<<"incorrecto";
    }
    
    

    return 0;
}