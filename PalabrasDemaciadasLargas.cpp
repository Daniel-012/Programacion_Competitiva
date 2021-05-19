#include<iostream>
#include<string>

using namespace std;

int main(){
	int n;
	string palabra;
	cin>>n ;
	
	for(int i=0;i<n;i++){
		cin >> palabra;
		if(palabra.size()>10){
			cout<< palabra[0]<<palabra.size()-2<<palabra[palabra.size()-1]<<"\n";
		}else{
			cout<< palabra<<"\n";
		}
		
		
	}
	
	
	
	
	
	
	
	return 0;
}
