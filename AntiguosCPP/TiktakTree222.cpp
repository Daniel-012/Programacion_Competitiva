#include <iostream>

using namespace std;

int main(){
	int a;
	int contador=0;
	int d;
	cin>> a;
	
	
		if(a == 1 ){
		    cout<< 10 <<" "<< 1024;
	   }else if( a == 2){
	 		cout<< 9 <<" "<< 1024;
	        }else{
		    	for(int i = 0; i <10;i++){
		           if(a%11!=1){
						a= a*2;
					
						contador++;
					}else{
						
					//cout <<d <<" "<<a;
					}
						
				}
				cout <<contador <<" "<<a;   
		}
	
	return 0;
}
