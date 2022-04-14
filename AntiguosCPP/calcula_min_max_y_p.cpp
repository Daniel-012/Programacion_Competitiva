#include<iostream>

using namespace std;



int main (){
	int i=1, max=0, min=1000000, n, num,p , r, sum=0;
	cin>> n;
	while(i<=n){
		cin>> num;
		if(num < min){
		min=num;}
		else{
			
		}
		if(num>max){
		max=num; }
		else{
			
		}
		sum=sum+num;
		i=i+1;		
	}
	p=sum/n;
	r=p;
	while(r>=1){
	r=r-1;
	}
	
	if(r>=0.5){
		p=p-r+1;
	} else{
		p=p-r;
	}
	cout<< min<< " ";
	cout<< max<< " ";
	cout<< p;
	
	
	return 0;
}
