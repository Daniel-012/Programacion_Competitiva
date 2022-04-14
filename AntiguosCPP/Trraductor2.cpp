#include<iostream>
#include<vector>

using namespace std;

int main(){
	int a; 
	int b;
	int num1;
	int num2;
	int max= 10000;

	//hacemos crecer nuestro vector
	vector <int, char> a3;
			for(int i=0; i<=max; i++){
			a3.push_back(0);
		}


	//insertamos las varibles principales
	cin>> a>> b;
	
	//insertamos los numeros con su traduccion
	for(int i=0; i<a; i++){
	
		cin>>num1>> num2;
		
		//a3.insert(a3.begin() +num1,num2);
		a3[num1]=num2;
	}
	
	//insertamos los datos que queremos traducir
	int n;
	for(int i=0; i<b;i++){
		cin >> n;
		if(a3[n]=0){
		cout << "C?"	
		}else{
		
		cout << a3[n]<< "\n";
	}
	}
	
	
	
	
	return 0;
}




