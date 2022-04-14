#include<iostream>
#include<string>
using namespace std;

int main(){
	 
	 string original = "Hello, world!";
	 string prueba;
	 
	 getline(cin,prueba);
	 
	 if(prueba==original){
	 	cout<<"bien";
	 }else{
	 	cout <<"mal";
	 }
	
	
	return 0;
}