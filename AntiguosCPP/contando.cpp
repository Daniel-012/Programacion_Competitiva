#include<iostream>
#include<string>

using namespace std;

int main(){
	string cadena;
	int a=0;
	int e=0;
	int d=0;
	int o=0;
	int u=0;
	
	getline(cin,cadena);
	
	for(int i=0; i<=cadena.size();i++){
		if (cadena[i]== 'a' || cadena[i]== 'A' ){
			a=a+1;
		}else if (cadena[i]== 'e' || cadena[i]== 'E' ){
			e=e+1;
		}else if (cadena[i]== 'i' || cadena[i]== 'I' ){
			d=d+1;
		}else if (cadena[i]== 'o' || cadena[i]== 'O' ){
			o=o+1;
		}else if(cadena[i]== 'u' || cadena[i]== 'U' ){
			u=u+1;
		}
		
		
	}
	
	
	
	cout << a<<" " << e<<" " << d<<" " << o<<" " << u;
	
	
	
	
	
	return 0;
}
