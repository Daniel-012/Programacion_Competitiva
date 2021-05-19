#include<iostream>
#include<iomanip>

using namespace std;

int main(){
	int a;
	int b;
	float p=0;
	
	cin>> a;
	for(int i =0;i<a;i++){
		cin>> b;
		p=p+b;
	}
	
	cout<< fixed<< setprecision(2)<<p/a;
	
	
	return 0;
}
