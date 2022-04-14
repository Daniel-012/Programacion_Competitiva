#include<iostream>
#include<string>

using namespace std;

bool comprobar( string prueba, int n){
    int a=0;

    for(int i=0; i<n; i++){
    if( prueba[i]== 'a'){
        a++;
    }
    
    }
    if( a== n){
        return true;
    }else{
        return false;
    }

}

bool comprobar2( string prueba, int n){
    int c=0;

    for(int i=prueba.size()-1; i >prueba.size()-n-1; i--){
    if( prueba[i]== 'c'){
        c++;
    }
    
    }
    if( c== n){
        return true;
    }else{
        return false;
    }

}

int main(){
    int a=0;
    int b=0;
    int c=0;
    string abc;
    cin>> abc;

    for( int i=0; i<abc.size(); i++){
        if( abc[i]== 'a' ){
            a++;
        }else if( abc[i]== 'b' ){
            b++;
        }else if( abc[i]== 'c' ){
            c++;
        }
    }

    if( comprobar(abc, a) && a>=1 && b>=1 && c>=1 && comprobar2(abc, c)){
        if( c==a || c== b || c== b+a){
            cout<< "SI"<<endl;
        }else{
            cout<<"NO"<< endl;
        }
    }else{
        cout<<"NO"<<endl;
    }
    


    return 0;
}