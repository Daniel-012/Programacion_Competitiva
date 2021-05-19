#include<iostream>

using namespace std;

int main(){
	int precio=0;
	float iva=0.16;
	int piva=0;
	int mult=0;
	int sum=0;
	
	cout<< "Ingrese el precio del producto :"; cin>> precio;
	
	mult = precio* iva;
	
	sum = mult+ precio;
	
	cout<< "\n El precio con iva aplicado es: " << sum;
	
	
	return 0;
}

