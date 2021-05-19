#include<iostream>

using namespace std;

int main(){
    int n;
    int c=0;

    cin>> n;

    for(int j=0; j<n; j++){
        if( j%2==0){
            for( int i=0; i<n; i++){
                if( j==i){
                    cout<<'X';
                }else{
                    cout<<'o';
                }
            
            }
        
        }else{
            for( int i=0; i<n; i++){
             if( j==i){
                    cout<<'X';
                }else{
                    cout<<'a';
                }
            }
        }
        cout<<endl;
        
    }



    return 0;
}