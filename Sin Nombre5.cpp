#include<iostream>
using namespace std;
void suma(int a){
	long  long int b=0;
	
	if(a<=1000000){
		for(int i=1;i<=a;i++){	
		b=b+i;	
	}
	cout<<b;
	
}
}
int main(){
	long long int a=0;

	cin>> a;
	
	if(a==1){
		cout<<2;
	}else{
	suma(a);
	}
	return 0;
}
