#include<iostream>
#include<vector>


using namespace std;


int main(){
	int n1;
	int numeros;
	int n2;
	int numeros2;
	
	cin>> n1;

	
	vector<int> n3;
	for(int i=0;i<n1;i++){
		cin>> numeros;
		n3.push_back(numeros);
	}

		cin>> n2;
	
	vector <int> n4;
	for (int i=0; i<n2; i++){
	cin>>numeros2;	
		n4.push_back(numeros2);
		
	}
	
	int sum=0;
	
	cout<< "Los elementos del vector resultante son: " << "\n";
	if ( n1>n2){
		for(int i=0;  i<n2; i++ ){
			sum   = n3[i]+n4[i];
			cout<< sum << " ";
			}
		
		for(int i = n2; i<n1; i++){
			cout << n3[i]<< " " ;
			
		}
		
	}else{
			for(int i=0;  i<n1; i++ ){
			cout<< n3[i]+n4[i] << " ";
			}
		
		for(int i = n1; i<n2; i++){
			cout << n4[i]<< " ";
			
		}
		
	}
	
	
		
		
	
	
	return 0;
}
