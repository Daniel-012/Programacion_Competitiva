#include<iostream>
#include<iomanip>

using namespace std;

int main(){
	int n;
	float  a ;
	float b;
	float c=1.00;
	int s=0;
	
	cin>> n;
	
	for(int i=0; i<n;i++){
 	cin>> a;
		while(a>=c){
			a--;
		
		}
		s=s+a*10;
	}
	
	cout<< s+1;
	
	
	return 0;
}
