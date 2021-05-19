#include<iostream>
#include<string>

using namespace std;

int main(){
    string pala;
    int n=0;
    int p=0;
    int x=0;
    getline( cin, pala);
    for( int i= pala.size()-1; i>=0 ; i--){
        if( pala[i]>= 48 && pala[i]<=57 ){
            n++;
        }else if(pala[i]== 32){
            x++;
        }else{
            p++;
        }
        cout << pala[i];
    }
    cout<<endl<< p<< " "<<n;


    return 0;
}