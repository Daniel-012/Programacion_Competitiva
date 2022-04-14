#include<iostream>
#include<vector>

using namespace std;

int main(){
	int a; 
	int b;
	int num1;
	int num2;
	int max= 10000;

	vector <int> a3;
			for(int i=0; i<=max; i++){
			a3.push_back(0);
		}


	cin>> a>> b;
	
	
	for(int i=0; i<a; i++){
	
		cin>>num1>> num2;
		
		
		a3[num1]=num2;
	}
	
	int n;
	for(int i=0; i<b;i++){
		cin >> n;
		if(a3[n]==0){
			cout<< "C?"<< "\n";
		}else{
		
		cout << a3[n]<< "\n";
	}
}
	return 0;
}




