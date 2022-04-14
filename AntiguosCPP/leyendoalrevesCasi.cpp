#include<iostream>
#include<string>

using namespace std;

int main(){
	int a ;
	int b;
	
	string  original;
	string cambio;

	cin>> a >> b;

	if(getchar()== 10){
		getline(cin,original);
	}

	int c=0;


	for(int i=1; i<=a;i++){
		cambio.push_back(original[i-1]);
}
	
	for(int i=a; i<=b;i++){
		cambio.push_back(original[b-c]);
	c++;
			
	}
	
	for(int i=b+1;i<=original.size();i++){
		
		cambio.push_back(original[i]);
	}
	
	
	for(int i =0;i<cambio.size()-1;i++){
		cout<<cambio[i];
	}
	
	
	
	
	return 0;
}
