#include<bits/stdc++.h>

using namespace std;

int main(){
    stack<int> pila;
    int n;
    int x;
    int s=0;

    cin>> n;

    while(n!=0){
        cin>> x;
        s=x;
        if( pila.empty()== true){
            pila.push(s);
        }else
        {
        while( s== pila.top()) {
            
            s += pila.top();
            pila.pop();
            if( pila.empty()== true){
                break;
            }
        }
        pila.push(s);
        }
        
       


        n--;
    }

    cout<< pila.size()<<'\n';

    while(pila.empty()== false){
        cout<< pila.top()<<'\n';
        pila.pop();
    }






    return 0;
}