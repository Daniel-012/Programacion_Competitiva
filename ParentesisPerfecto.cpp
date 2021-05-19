#include<bits/stdc++.h>

using namespace std;

bool pila(string pala){
    stack<char> pilita;
    pilita.push(pala[0]);

    char actu;
    for(int i=1; i<pala.size(); i++){
        if( !pilita.empty()){
            actu= pilita.top();
            if( actu=='('){
                if( pala[i]==')'){
                    pilita.pop();
                    continue;
                    
                }else{
                    pilita.push(pala[i]);
                }
            }
            if( actu=='{'){
                if( pala[i]=='}'){
                    pilita.pop();
                    continue;
                    
                }else{
                    pilita.push(pala[i]);
                }
            }
            if( actu=='['){
                if( pala[i]==']'){
                    pilita.pop();
                    continue;
                    
                }else{
                    pilita.push(pala[i]);
                }
            }
        }else{
            pilita.push(pala[i]);
        }

    }
    
    if( pilita.empty()){
        return true;
    }else{
        return false;
    }
       
}




int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    string paren;
    cin>> n;
    for(int i=0; i<n; i++){
        cin>> paren;
        if(paren.size()%2 ==0){
            if(pila(paren)){
                cout<<"SI\n";
            }else{
                cout<<"NO\n";
            }

        }else{
            cout<<"NO\n";
        }
    }
    




    return 0;
}