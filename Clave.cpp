#include<iostream>
#include<vector>
#include<algorithm>

using  namespace std;

int main(){
	int m;
	int c;
	int b;
	vector<int> numeros;
	vector<int> clave;
	
	cin>>m;
	
	for(int i=0;i<m;i++){
		cin >>b;
		numeros.push_back(b);
	}
	sort(numeros.begin(),numeros.end());
	cin>>c;
	for(int i =0;i<numeros.size();i++){
		if(numeros[i]>c){
			clave.push_back(numeros[i]);
		}
		
	}
	
	cout<< clave[0];
	
	return 0;
}
