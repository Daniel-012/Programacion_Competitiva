#include<iostream>

using namespace std;

int main(){
    long int a=0;
    long int b=0;
    long int c=0;
    char x;
    
         
    while ( getchar() != '\n' ){
    	
		cin>> x;
         	
        if( x== 'a'){
            a++;
        }else if ( x== 'b'){
            b++;
        }else if ( x== 'c'){
            c++;
        }
    

        cout<< "\n";
    }
    
    
    if( a != 0 && b != 0 && c!=0 ){
        if( c==a || c==b || c== a+b){
            cout<< "SI";
        }else{
            cout<< "NO";
        }
    }else{
        cout<< "NO";
    }

    return 0;
}

