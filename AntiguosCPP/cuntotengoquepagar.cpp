#include<iostream>

using namespace std;

int main(){
	
	int a;
	int b;
	int p;
	int q;
	
	cin>>a>>b>>p>>q;
	
	p=15000-((15000*p)/100);
	
	q=20000-((20000*q)/100);
	
	cout<< p*a+q*b;
	
	
	return 0;
}
