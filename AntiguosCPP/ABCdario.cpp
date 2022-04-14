#include<iostream>
#include<string>

using namespace std;

bool comp( int n, string prueba){
    int c=0;
    string origin= "abcdefghijklmnopqrstuvwxyz";
    for(int i=0; i<prueba.size(); i++){
        if( origin[n]== prueba[i]){
            c++;
        }
    }
    if( c!=0){
        return true;
    }else{
        return false;
    }

}





int main(){
    string abc;
    int c;
    int i;
    int k;
    int n;
    string origin= "abcdefghijklmnopqrstuvwxyz";

    cin>> n;
    
    while( n!=0){
    c=0;
    k=0;
    cin>> abc;

    while(  k<origin.size() ){
        if( comp( k, abc)){
            c++;
        }
    k++;
    }

    if( c==26){
        cout<<"PERFECT"<<endl;
    }else{
        cout<<"NO WAY"<<endl;
    }


    n--;
    }


    return 0;
}