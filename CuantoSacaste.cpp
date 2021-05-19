#include<iostream>

using namespace std;

int main(){
	int b;
	int a ;
	cin>> a;
	
	 for (int i =0;i<3;i++){
	 	cin>>b;
	 	if(b==a){
	 		cout<< "Te gano en la siguiente"<<"\n";
		 }else if(b<a){
		 	cout<< "Soy Mejor"<<"\n";
		 }else{
		 	cout<< "Shh"<<"\n";	
		 }
	 	
	 }
	
	return 0;
}
