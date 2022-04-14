#include <iostream>

using namespace std;

int main(){
	double l1;
	double l2;
	double l3;
	double may;
	double sum;
	
	cin>> l1;
	cin>> l2;
	cin>> l3;
	
	if(l1>=l2 && l1>=l3){
		may=l1;
		sum=l2+l3;
		if(sum>=may){
			cout<< "SI";
		}else{
			cout<< "NO";
		}
	}else if(l2>=l1 && l2>=l3){
		may = l2;
		sum=l1+l3;
			if(sum>=may){
			cout<< "SI";
		}else{
			cout<< "NO";
	}} else {
		may = l3;
		sum=l1+l2;	
			if(sum>=may){
			cout<< "SI";
		}else{
			cout<< "NO";
	}}
	
	return 0;
}
