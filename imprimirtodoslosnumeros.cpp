#include<iostream>

using namespace std;

int main(){
	int a ;
	
	cin>> a;
	if(a<0){
		a=a*-1;
		for(int i =0; i<a; i++){
		if(i%2==0){
			cout<< i<<"=par"<<"\n";
		}else{
			cout<< i<<"=impar"<<"\n";	
		}
	}
	}else if(a==0){
		cout<<"Number not accepted";
	}else{
	for(int i =0; i<a; i++){
		if(i%2==0){
			cout<< i<<"=par"<<"\n";
		}else{
			cout<< i<<"=impar"<<"\n";	
		}
	}
	}
	
	
	
	
	
	
	return 0;
}
